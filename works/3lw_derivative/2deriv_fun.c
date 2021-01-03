// program prints data to file, 'derivative.dat'
#include <stdio.h>
#include <math.h>
#define N 100
void derivef();
void deriver();
void derivec();

void main(){
	int s;
	printf("select direction (1 - forward, 2 - central, 3 - reverse): ");
	scanf(" %d",&s);

	switch(s){
		case 1: derivef(); break;
		case 2: derivec(); break;
		case 3: deriver(); break;
		}

}

void derivec(){
	int i;
	long double y[N], x[N], f1[N], f2[N], g[N], a=-2*M_PI, b=2*M_PI, delta_x=(b-a)/(N-1);
	FILE *fptr;

	for(i=1 ; i<N ; i++, a+=delta_x){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	f1[i] = -cos(x[i]/2)*sin(x[i]/2); // analytical function first derivative
	f2[i] = (sin(x[i]/2)*sin(x[i]/2)-cos(x[i]/2)*cos(x[i]/2))/2; // analytical second derivative
	}

	for(i=1 ; i<N ; i++) // calculates f'(x) for i=0 to i=100
	g[i] = (y[i+1]-y[i-1])/(2*(x[i+1]-x[i]));

	fptr = fopen("derivative.dat","w+");
	fprintf(fptr,"# ________________________________________________________________________________________________\n");
	fprintf(fptr,"#|  x  || f(x) |        f\'(x)       |        f\'(x)      ||        f\'\'(x)      |       f\'\'(x)      |\n");
	fprintf(fptr,"#|     ||      | analytical formula | finite difference || analytical formula | finite difference |\n");
	fprintf(fptr,"#|_____||______|____________________|___________________||____________________|___________________|\n");

	for(i=3 ; i<N-2 ; i++)
	fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n"\
		,x[i],y[i],f1[i],g[i],f2[i],(g[i+1]-g[i-1])/(2*(x[i+1]-x[i]))); // centre

	fclose (fptr);
	printf("\n\t'derivative.dat' updated!\n\n");
}

void deriver(){
	int i;
	long double y[N], x[N], f1[N], f2[N], g[N], a=-2*M_PI, b=2*M_PI, delta_x=(b-a)/(N-1);
	FILE *fptr;

	for(i=N-1 ; i>0 ; i--, a+=delta_x){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	f1[i] = -cos(x[i]/2)*sin(x[i]/2); // analytical function first derivative
	f2[i] = (sin(x[i]/2)*sin(x[i]/2)-cos(x[i]/2)*cos(x[i]/2))/2; // analytical second derivative
	}

	for(i=N-1 ; i>0 ; i--)
	g[i] = (y[i]-y[i-1])/(x[i+1]-x[i]);

	fptr = fopen("derivative.dat","w+");
	fprintf(fptr,"# ________________________________________________________________________________________________\n");
	fprintf(fptr,"#|  x  || f(x) |        f\'(x)       |        f\'(x)      ||        f\'\'(x)      |       f\'\'(x)      |\n");
	fprintf(fptr,"#|     ||      | analytical formula | finite difference || analytical formula | finite difference |\n");
	fprintf(fptr,"#|_____||______|____________________|___________________||____________________|___________________|\n");

	for(i=N-2 ; i>2 ; i--)
	fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n"\
		,x[i],y[i],f1[i],g[i],f2[i],(g[i]-g[i-1])/(x[i+1]-x[i])); // reverse

	fclose (fptr);
	printf("\n\t'derivative.dat' updated!\n\n");
}

void derivef(){
	int i;
	long double y[N], x[N],f1[N],f2[N], g[N], a=-2*M_PI, b=2*M_PI, delta_x=(b-a)/(N-1);
	FILE *fptr;

	for(i=0 ; i<N ; i++, a+=delta_x){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	f1[i] = -cos(x[i]/2)*sin(x[i]/2); // analytical function first derivative
	f2[i] = (sin(x[i]/2)*sin(x[i]/2)-cos(x[i]/2)*cos(x[i]/2))/2; // analytical second derivative
	}

	for(i=0 ; i<N ; i++) // calculates first derivative for i=0 to i=100
	g[i] = (y[i+1]-y[i])/(x[i+1]-x[i]);

	fptr = fopen("derivative.dat","w+");
	fprintf(fptr,"# ________________________________________________________________________________________________\n");
	fprintf(fptr,"#|  x  || f(x) |        f\'(x)       |        f\'(x)      ||        f\'\'(x)      |       f\'\'(x)      |\n");
	fprintf(fptr,"#|     ||      | analytical formula | finite difference || analytical formula | finite difference |\n");
	fprintf(fptr,"#|_____||______|____________________|___________________||____________________|___________________|\n");

	for(i=0 ; i<N-2 ; i++)
	fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n"\
		,x[i],y[i],f1[i],g[i],f2[i],(g[i+1]-g[i])/(x[i+1]-x[i])); // forward

	fclose (fptr);
	printf("\n\t'derivative.dat' updated!\n\n");
}
