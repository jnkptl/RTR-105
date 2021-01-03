// derivative of sin(x) function
// y[i+1]-y[i]/delta_x for forward differential i=0
// y[i]-y[i+1]/delta_x for reverse differential i=99
// (y[i+1]-y[i-1]/(2*delta_x) for central differential i=!0
#include <stdio.h>
#include <math.h>
#define N 100

void main(){
	int i; float y[N], x[N];
	float a=0., b=2*M_PI, x, delta_x=(b-a)/(N-1); // 1e-2 = 0.01

	x=a;
	for(i=0 ; i<N ; i++, x+=delta_x){ // creates an array containing sin values
	 y[i] = sin(x); // x+=delta_x;
	 }

	printf("%4cx%15csin(x)%10csin\'(x)\n",32,32,32); // header

	x=a;
	for(i=0 ; i<N-1 ; i++, x+=delta_x){ // creates an array containing sin values
	 printf("%8.2f\t%8.2f\t%8.2f\n",x,y[i],(y[i+1]-y[i])/delta_x);
	 }

	 printf("%8.2f\t%8.2f\t\n",x,y[i]);

}

