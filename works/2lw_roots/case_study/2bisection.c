// if product of sin(a), sin(b) is positive then there are no roots between a, b
// if product is negative, a or b is negative and therefore the line passes through the x-axis (y=0, root)
// however if both values are negative...
#include <stdio.h>
#include <math.h>
void old();
float modified_sin(float x, float A);

int main(){
	float a, b, x, delta_x, y, A;
	a = 0;
	b = 2*M_PI;

	printf("dear user, please enter A value for the following equation: sin(x)=A\nvalue: ");
	scanf("%f",&A);
	x=a;
	delta_x=0.1;
	printf("\tx\ty\n");
	while(x<b){
	printf("%10.1f%10.1f\n",x,modified_sin(x,A));

	x+=delta_x;
	}
}

float modified_sin(float x, float A){
	return sin(x)-A;
}

void old(){
	float a, b, x, delta_x=1.e-3, y, A,funkca,funkcb,funkcx; int k=0;
	funkca = sin(a);funkcb = sin(b);
	if(funkca*funkcb>0){
	 printf("interval [%.2f;%.2f] sin(c) function ",a,b);
	 printf("has no roots [or has an even number of roots]");
//	 return 1;
	}

	printf("		sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
	printf("sin(%7.3f)=%7.3f\n",b,sin(b));

	while((b-a)>delta_x){
	 k++; //k=k+1;//k+=1;
	 x = (a+b)/2.;
	  if(funkca*sin(x)>0) /* when a=0 -> funkca=0 ->  multiplication is accurate 0
	   all the time -> all the time "working" b=x*/
	   a=x;
	 else
	  b=x;
	 printf("%2d. iteration: sin(%7.3f)=%7.3f\t",k,a,sin(a));
	 printf("sin(%7.3f)=%7.3f\t",x,sin(x));
	 printf("sin(%7.3f)=%7.3f\n",b,sin(b));}

	printf("root is located at x=%.3f, when sin(x) is %.3f\n",x,sin(x));

//	return 0;
}
