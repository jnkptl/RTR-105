// derivative of sin(x) function
#include <stdio.h>
#include <math.h>

void main(){
	float a=0., b=2*M_PI, x, delta_x=1e-2; // 1e-2 = 0.01

	printf("%4cx%15csin(x)%10csin\'(x)\n",32,32,32); // printf("\tx\t\tsin(x)\t\tsin\'(x)\n"); // tab = 7 spaces

	x=a;
	while(x<b){
	 printf("%8.2f\t%8.2f\t%8.2f\n",x,sin(x),(sin(x+delta_x)-sin(x))/delta_x);
	 x+=delta_x;
	 }
}
