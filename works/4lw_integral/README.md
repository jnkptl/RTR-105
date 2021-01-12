# Lab Work 4 - Numerical Methods - Numerical Integration
Integration is used to approximate the area for a defined interval between a function and the x axis.

The following image is a representation of the integral of cos^2(x/2) between zero and half pi:
![Integral of cos^2(x/2) from 0 to 1.567](https://github.com/jnkptl/RTR-105/blob/master/works/4lw_integral/Integral%20cos%5E2(0.5x)%20from%200%20to%200.5pi.png "image from wolfram aplha")

## Rectangle rule
This method uses _n_ rectangles of equal width to calculate the area of a function.

## Trazpezoid rule
This method, more accurate than rectangle rule, uses _n_ trapezoids of equal width to calculate the area of a function

## Simpson's rule
Simpson's rule calculates the area under a curve of _n_ segments of equal width.

## code:
This program calculates area of a function of a user defined interval to a given precision.
```
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

	printf("please define precision: ");
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
	}

	printf("\n");
	printf("approximate integral value (area): %.4f (sum of area of %d segments)\n",integr2,n);
}

void t_integr(float a,float b, float eps) // trapezoid rule
{
	float h, integr1=0., integr2; //a=0., b=M_PI, eps=1.e-3;
	int k,n=2;

	integr2 = (b-a) * (fun(a)+fun(b)) / 2;
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
	return cos(x/2)*cos(x/2);
}
```
## output:
```
integration of cos(x/2)*cos(x/2):

please define start of range (a): 0
please define end of range (b): 2
please define precision: 0.0001
please select method (1 - rectangle rule, 2 - trapezoid rule, 3 - simpson's rule): 123

approximate integral value (area): 1.4547 (sum of area of 64 rectangles)

approximate integral value (area): 1.4546 (sum of area of 128 trapezoids)

approximate integral value (area): 1.4546 (sum of area of 16 segments)
```
gnuplot image of output:
![integral of cos^2(x/2 from 0 to 2)](https://github.com/jnkptl/RTR-105/blob/master/works/4lw_integral/img_intgr_of_fun.svg "integral of cos^2(x/2) from 0 to 2")
