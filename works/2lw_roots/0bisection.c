#include <stdio.h>
#include <math.h>

int main(){
	float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3, funkca, funkcb, funkcx;
	int k=0;

	funkca = cos(a/2)*cos(a/2);funkcb = cos(b/2)*cos(b/2);
	if(funkca*funkcb>0){ // if product of sin(a), sin(b) is positive then there are no roots between a, b
	// if product is negative, a or b is negative and therefore the line passes through the x-axis (y=0, root)
	// however if both values are negative...
	 printf("range [%.2f;%.2f] cos(x/2)*cos(x/2) function ",a,b);
	 printf("has no roots (or has an even number of roots)\n");
	 return 1;}

	printf("		cos^2(%7.3f/2)=%7.3f\t\t\t\t",a,(cos(a/2)*cos(a/2)));
	printf("cos^2(%7.3f/2)=%7.3f\n",b,(cos(b/2)*cos(b/2)));

	while((b-a)>delta_x){
	 k++; //k=k+1;//k+=1;
	 x = (a+b)/2.;
	  if(funkca*(cos(x/2)*cos(x/2))>0) /* when a=0 -> funkca=0 ->  multiplication is accurate 0
	   all the time -> all the time "working" b=x*/
	   a=x;
	 else
	  b=x;
	 printf("%2d. iteration: cos^2(%7.3f/2)=%7.3f\t",k,a,cos(a/2)*cos(a/2));
	 printf("cos^2(%7.3f/2)=%7.3f\t",x,cos(x/2)*cos(x/2));
	 printf("sin(%7.3f)=%7.3f\n",b,cos(b/2)*cos(b/2));}

	printf("root is located at x=%.3f, when cos^2(x) is %.3f\n",x,cos(x/2)*cos(x/2));

	return 0;}