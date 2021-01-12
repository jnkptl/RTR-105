#include <stdio.h>
#include <math.h>

void r_integr(float a, float b, float eps);
void t_integr(float a, float b, float eps);
void s_integr(float a, float b, float eps);
float fun(float x);

void main(){
	float a, b, c;
	int m;
	printf("integration of cos(x/2)*cos(x/2):\n\n");
	printf("please define start of range (a): ");
	scanf(" %f",&a);

	printf("please define end of range (b): ");
	scanf(" %f",&b);

	printf("please define start of precision: ");
	scanf(" %f",&c);

	printf("please select method (1 - rectangle rule, 2 - trapezoid rule, 3 - simpson's rule): ");
	scanf(" %i",&m);

	switch(m){
	 case 1:
	 r_integr(a,b,c);
	 break;

	 case 2:
	 t_integr(a,b,c);
	 break;

	 case 3:
	 s_integr(a,b,c);
	 break;

	 case 23:
	 r_integr(a,b,c);
	 t_integr(a,b,c);
	 s_integr(a,b,c);
	 break;

	 default:
	 printf("invalid selection\n");
	 break;
	 }

}

void s_integr(float a, float b, float eps) // simpsons rule
{
	float h, integr1=0., integr2; //a=0., b=M_PI, eps=1.e-3;
	int k,n=2;

	integr2 = (b-a) * (fun(a)+fun(b)) / 2;
//	integr2 = fabs(integr2) + 1*eps;
	while(fabs(integr2-integr1)>eps){
	  n*=2;
	  h=(b-a)/n;
	  integr1=integr2;
	  integr2=h*fun(a)/3; // first term
	  for(k=1 ; k<n ; k++)
	    if(k%2==1) // odd term
	      integr2+=h*(4*fun(a+h*k))/3;
	    else // even term
	      integr2+=h*(2*fun(a+h*k))/3;
	  integr2+=h*fun(a+h*k)/3; // last term
//	  printf("last term = %f\n",h*fun(a+h*k)/3);
	}

	printf("\n");
	printf("approximate integral value (area): %.4f (sum of area of %d segments)\n",integr2,n);
}

void t_integr(float a,float b, float eps) // trapezoid rule
{
	float h, integr1=0., integr2; //a=0., b=M_PI, eps=1.e-3;
	int k,n=2;

	integr2 = (b-a) * (fun(a)+fun(b)) / 2; // area of 1 trapezoid
//	integr2 = fabs(integr2) + 1*eps;
	while(fabs(integr2-integr1)>eps){
	  n*=2;//n*=2;
	  h=(b-a)/n;
	  integr1=integr2;
	  integr2=0.;
	  for(k=0 ; k<n ; k++)
	    integr2+=h*(fun(a+h*k)+fun(a+h*(k+1)))/2;
	}
	printf("\n");
	printf("approximate integral value (area): %.4f (sum of area of %d trapezoids)\n",integr2,n);
}

void r_integr(float a, float b, float eps){
	float h, integr1=0., integr2; //a=0., b=M_PI, eps=1.e-3;
	int k, n=2;

	integr2 = (b-a) * (fun(a)+fun(b)) / n; // area of 2 rectangles
//	integr2 = fabs(integr2) + 1*eps;
	while(fabs(integr2-integr1)>eps){
	  n*=2;
	  h=(b-a)/n;
	  integr1=integr2;
	  integr2=0.;
	  for(k=0 ; k<n ; k++)
	    integr2+=h*fun(a+(k+0.5)*h);
	}
	printf("\n");
	printf("approximate integral value (area): %.4f (sum of area of %d rectangles)\n",integr2,n);
}

float fun(float x){
//	return sin(x);
	return cos(x/2)*cos(x/2);
}
