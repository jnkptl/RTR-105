#include <stdio.h>
#include <math.h>
#define N 100

void main(){
	int i;
	float y[N], x[N], yy[N];
	float a=0., b=2*M_PI, delta_x=(b-a)/(N-1);

	for(i=0 ; i<N ; i++, a+=delta_x){
	x[i] = a;
	y[i] = sin(x[i]); // y[i] = cos(x[i]/2)*cos(x[i]/2);
	}

	for(i=0 ; i<N ; i++)
	yy[i] = (y[i+1]-y[i])/(x[i+1]-x[i]);

	printf("\tx\t\tf(x)\t\tf\'(x)\t\tf\'\'\(x)\n");

	for(i=0 ; i<N-1 ; i++){
	printf("%10.2f\t%10.2f\t\t%10.2f\t%10.2f\n",x[i],y[i],yy[i],\
		(yy[i+1]-yy[i])/(x[i+1]-x[i])); // forward
	// y[i]-y[i-1] backward
	// (y[i+1]-y[i-1])/(2*delta_x) from centre
	}
	printf("%10.2f\t%10.2f\t\n",x[i],y[i]);
}
