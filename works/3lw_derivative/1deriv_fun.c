#include <stdio.h>
#include <math.h>
#define N 100
void derivef();
void deriver();
void derivec();

void main(){
/*	int s;
	printf("select direction...\n1 - forward\n2 - central\n3 - reverse\nselection: ");
	scanf(" %d",&s);

	switch(s){
		case 1:
		derivef();
		break;
		case 2:
		derivec();
		break;
		case 3:
		deriver();
		break;
		}
*/	deriver();
}

void derivec(){
	int i;
	long double y[N], x[N], g[N], a=-2*M_PI, b=2*M_PI, delta_x=(b-a)/(N-1);

	for(i=1 ; i<N ; i++, a+=delta_x){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	}

	for(i=1 ; i<N ; i++) // calculates first derivative for i=0 to i=100
	g[i] = (y[i+1]-y[i-1])/(2*(x[i+1]-x[i]));

	printf("#%3cx%15cf(x)%12cf\'(x)%11cf\'\'(x)\n",32,32,32,32); // tab = 7 spaces

	for(i=3 ; i<N-1 ; i++)
//	printf("x[%02d]=%6.2Lf\ty[%02d]=%6.2Lf\tg[%02d]=%6.2Lf\tg'[%02d]=%6.2Lf\n",i,x[i],i,y[i],i,g[i],i,(g[i+1]-g[i])/(x[i+1]-x[i])); // forward
	printf("%8.2Lf\t%8.2Lf\t%8.2Lf\t%8.2Lf\n",x[i],y[i],g[i],(g[i+1]-g[i-1])/(2*(x[i+1]-x[i]))); // centre
	//     (y[i+1]-y[i])/(delta_x) forward
	//     (y[i]-y[i-1])/(delta_x) reverse
	// (y[i+1]-y[i-1])/(2*delta_x) centred
//	printf("%10.2Lf\t%10.2Lf\t%10.2Lf\t%10.2Lf\n",x[i],y[i],g[i],(g[i+1]-g[i])/(x[i+1]-x[i]));
}

void deriver(){
	int i;
	long double y[N], x[N], g[N], a=-2*M_PI, b=2*M_PI, delta_x=(b-a)/(N-1);

	for(i=N-1 ; i>0 ; i--, a+=delta_x){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	}

	for(i=N-1 ; i>0 ; i--) // calculates first derivative for i=0 to i=100
	g[i] = (y[i]-y[i-1])/(x[i+1]-x[i]);

//	printf("#\tx\t\tf(x)\t\tf\'(x)\t\tf\'\'\(x)\n"); // header
	printf("#%3cx%15cf(x)%12cf\'(x)%11cf\'\'(x)\n",32,32,32,32); // tab = 7 spaces

	for(i=N-2 ; i>2 ; i--)
//	printf("x[%02d]=%6.2Lf\ty[%02d]=%6.2Lf\tg[%02d]=%6.2Lf\tg'[%02d]=%6.2Lf\n",i,x[i],i,y[i],i,g[i],i,(g[i+1]-g[i])/(x[i+1]-x[i])); // forward
	printf("%8.2Lf\t%8.2Lf\t%8.2Lf\t%8.2Lf\n",x[i],y[i],g[i],(g[i]-g[i-1])/(x[i+1]-x[i])); // reverse
	//     (y[i+1]-y[i])/(delta_x) forward
	//     (y[i]-y[i-1])/(delta_x) reverse
	// (y[i+1]-y[i-1])/(2*delta_x) centred
//	printf("%10.2Lf\t%10.2Lf\t%10.2Lf\t%10.2Lf\n",x[i],y[i],g[i],(g[i+1]-g[i])/(x[i+1]-x[i]));
}
void derivef(){
	int i;
	long double y[N], x[N], g[N], a=-2*M_PI, b=2*M_PI, delta_x=(b-a)/(N-1);

	for(i=0 ; i<N ; i++, a+=delta_x){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	}

	for(i=0 ; i<N ; i++) // calculates first derivative for i=0 to i=100
	g[i] = (y[i+1]-y[i])/(x[i+1]-x[i]);

//	printf("#\tx\t\tf(x)\t\tf\'(x)\t\tf\'\'\(x)\n"); // header
	printf("#%3cx%15cf(x)%12cf\'(x)%11cf\'\'(x)\n",32,32,32,32); // tab = 7 spaces

	for(i=0 ; i<N-2 ; i++)
//	printf("x[%02d]=%6.2Lf\ty[%02d]=%6.2Lf\tg[%02d]=%6.2Lf\tg'[%02d]=%6.2Lf\n",i,x[i],i,y[i],i,g[i],i,(g[i+1]-g[i])/(x[i+1]-x[i])); // forward
	printf("%8.2Lf\t%8.2Lf\t%8.2Lf\t%8.2Lf\n",x[i],y[i],g[i],(g[i+1]-g[i])/(x[i+1]-x[i])); // forward
	//     (y[i+1]-y[i])/(delta_x) forward
	//     (y[i]-y[i-1])/(delta_x) reverse
	// (y[i+1]-y[i-1])/(2*delta_x) centred
//	printf("%10.2Lf\t%10.2Lf\t%10.2Lf\t%10.2Lf\n",x[i],y[i],g[i],(g[i+1]-g[i])/(x[i+1]-x[i]));
}
