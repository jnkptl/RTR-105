
// program prints data to file, 'derivative.dat'
#include <stdio.h>
#include <math.h>

void derive(); void headr(); void plot();

void main(){
	int s;

	printf("differential of cos(x/2)*cos(x/2):\n\n");
	printf("select direction (1 - forward, 2 - central, 3 - reverse): "); scanf(" %d",&s);

	switch(s){
	case 1:
	derive(s);
	break;
	case 2:
	derive(s);
	break;
	case 3:
	derive(s);
	break;
	default:
	printf("invalid selection\n");
	break;
	}
}

void derive(int s){
	int i; double a,b,c;
	printf("please define start of range, a: "); scanf(" %le",&a);
	printf("please define end of range, b: "); scanf(" %le",&b);
	printf("please define difference of x, c: "); scanf(" %le",&c);

	int n = ((b-a)/c)+1;
	long double y[n], x[n], f1[n], f2[n], g[n], h[n];

	FILE *fptr;

	for(i=0 ; i<n ; i++, a+=c){
	x[i] = a;
	y[i] = cos(x[i]/2)*cos(x[i]/2);
	f1[i] = -cos(x[i]/2)*sin(x[i]/2); // analytical function first derivative
	f2[i] = (sin(x[i]/2)*sin(x[i]/2)-cos(x[i]/2)*cos(x[i]/2))/2; // analytical second derivative
	}

	switch(s){
		case 1:
		 for(i=0 ; i<n ; i++)
		 g[i] = (y[i+1]-y[i])/(x[i+1]-x[i]);
		 for(i=0 ; i<n-2 ; i++)
		 h[i] = (g[i+1]-g[i])/(x[i+1]-x[i]);
		 headr();
	 	 fptr = fopen("derivative.dat","a+");
		 for(i=0 ; i<n-2 ; i++)
		 fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n",x[i],y[i],f1[i],g[i],f2[i],h[i]); // forward
		 break;
		case 2: // central differentiation
		 for(i=1 ; i<n ; i++) // calculates f'(x)
		 g[i] = (y[i+1]-y[i-1])/(2*(x[i+1]-x[i]));
		 for(i=3 ; i<n-2 ; i++) // calculates f''(x)
		 h[i] = (g[i+1]-g[i-1])/(2*(x[i+1]-x[i]));
		 headr();
	 	 fptr = fopen("derivative.dat","a+");
		 for(i=3 ; i<n-2 ; i++) // prints data to file
		 fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n",x[i],y[i],f1[i],g[i],f2[i],h[i]);
		 break;
		case 3: // reverse differentiation
		 for(i=n-1 ; i>0 ; i--)
		 g[i] = (y[i]-y[i-1])/(x[i+1]-x[i]);
		 for(i=n-2 ; i>2 ; i--)
		 h[i] = (g[i]-g[i-1])/(x[i+1]-x[i]);
		 headr();
	 	 fptr = fopen("derivative.dat","a+");
		 for(i=n-2 ; i>2 ; i--)
		 fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n",x[i],y[i],f1[i],g[i],f2[i],h[i]);
		 break;
		}


	fclose (fptr);
	printf("'derivative.dat' updated!\n");
}

void headr(){
	FILE *fptr;
	fptr = fopen("derivative.dat","w+");

	fprintf(fptr,"# ________________________________________________________________________________________________\n");
	fprintf(fptr,"#|  x  || f(x) |        f\'(x)       |        f\'(x)      ||        f\'\'(x)      |       f\'\'(x)      |\n");
	fprintf(fptr,"#|     ||      | analytical formula | finite difference || analytical formula | finite difference |\n");
	fprintf(fptr,"#|_____||______|____________________|___________________||____________________|___________________|\n");

	fclose (fptr);
}
/*
void plot(double a,double b,double c){ // to crop graph to given range
	FILE *fptr;
	fptr = fopen("graph_23.gp","w+");
	fprintf(fptr,"set term svg size 800,800 enhanced font 'calibri,12' background 'beige'\n");
	fprintf(fptr,"set output 'picture_derivative.svg'\n");
	fprintf(fptr,"set key inside bottom right\n");
	fprintf(fptr,"set grid\n");
//	if(a>-2){b=(b-a);}else if(b<2){a=-M_PI;b=M_PI;}
	fprintf(fptr,"set xrange [%5f:%5f]\n",a,b);
	fprintf(fptr,"set yrange [%5f:%5f]\n",a,b);
	fprintf(fptr,"unset xlabel\n");
	fprintf(fptr,"unset ylabel\n");
	fprintf(fptr,"set title 'differentiate function 23'\n");
	fprintf(fptr,"plot cos(x/2)*cos(x/2) w lines title 'COS^2(X/2)' lc rgb '#35477d' lw 2,%c\n",92);
	fprintf(fptr,"\"derivative.dat\" using 1:2 title '(stored values) COS^2(X/2)' w lines lc rgb '#bbded6' lw 2,%c\n",92);
	fprintf(fptr,"\"derivative.dat\" using 1:3 w lines lc rgb '#35477d' lw 2 title '(analytical formula) COS^2''(X/2)',%c\n",92);
	fprintf(fptr,"\"derivative.dat\" using 1:4 title '(finite difference) COS^2''(X/2)' w lines lc rgb '#fae3d9' lw 2,%c\n",92);
	fprintf(fptr,"\"derivative.dat\" using 1:5 w lines lc rgb '#35477d' lw 2 title '(analytical formula) COS^2''%c''(X/2)',%c\n",92,92);
	fprintf(fptr,"\"derivative.dat\" using 1:6 title '(finite difference) COS^2''%c''(X/2)' w lines lc rgb '#ffb6b9' lw 2%c\n",92,92);
	fclose (fptr);
	printf("'graph_23.gp' created!\n");
}
*/
