#include <stdio.h>
#include <math.h>
#define N 100

void main()
{
	float y[N];
	float a=0., b=2*M_PI, x, delta_x=le-2/*0.01*/;
	printf("\tx\t\tsin(x)\t\tsin\'(x)\n");

	x=a;
	while(x<b){
	printf("%10.2f\t%10.2f\t%10.2f\n",x,sin(x),(sin(x+delta_x)-sin(x))/delta_x);
	x += delta_x; // x=x+delta_x;
	}
	printf("%10.2f\t%10.2f\t%10.2f\n",x,sin(x),(sin(x+delta_x)-sin(x))/delta_x);
//	printf()
}
