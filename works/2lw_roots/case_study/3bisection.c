// if product of sin(a), sin(b) is positive then there are no roots between a, b
// if product is negative, a or b is negative and therefore the line passes through the x-axis (y=0, root)
// however if both values are negative...
#include <stdio.h>
#include <math.h>

int root();
float modified_fun(float x, float A);

int main(){
	float a, b, x, delta_x, y, A;
	a = 0;
	b = 2*M_PI;

	printf("please define value for A in the following equation: cos(x/2)*cos(x/2)=A\nvalue: ");
	// tranforms the graph of the function moving it down by A units
	scanf("%f",&A);
	x=a;
	delta_x=0.1;
	printf("\tx\ty\n");
	while(x<b){
	printf("%10.1f%10.1f\n",x,modified_fun(x,A));

	x+=delta_x;
	}
}

float modified_fun(float x, float A){
	return (cos(x/2)*cos(x/2))-A;
}

int root(){
	float a, b, x, delta_x=1.e-3, y, A,funkca,funkcb,funkcx; int k=0;
	funkca = cos(a/2)*cos(a/2);funkcb = cos(b/2)*cos(b/2);

	if(funkca*funkcb>0){
	 printf("interval [%.2f;%.2f] cos(x/2)*cos(x/2) function ",a,b);
	 printf("has no roots [or has an even number of roots]");
	 return 1;
	}

	printf("		cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\t\t\t\t",a,a,cos(a/2)*cos(a/2));
	printf("cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\n",b,b,cos(b/2)*cos(b/2));

	while((b-a)>delta_x){
	 k++; //k=k+1;//k+=1;
	 x = (a+b)/2.;
	  if(funkca*(cos(x/2)*cos(x/2))>0) /* when a=0 -> funkca=0 ->  multiplication is accurate 0
	   all the time -> all the time "working" b=x*/
	   a=x;
	 else
	  b=x;
	 printf("iteration %02d: cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\t",k,a,a,cos(a/2)*cos(a/2));
	 printf("cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\t",x,x,cos(x/2)*cos(x/2));
	 printf("cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\n",b,b,cos(b/2)*cos(b/2));}

	printf("root is located at x=%.3f, when cos(x/2)*cos(x/2) is %.3f\n",x,cos(x/2)*cos(x/2));

	return 0;
}
