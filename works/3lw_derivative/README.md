# Lab Work 3 - Numerical Methods - Numerical Differentiation

The derivative of a function defines the rate at which an ouput changes with respect to an input or at
certain points. The second derivative of a function can show the rate of which the rate of change changes.

## First and second derivative of cos^2(x/2)
By calulating the function differences along certain values of x, we can identify where the derivative and second
derivatives. The smaller the difference in values of x the more accurate the calculated values will be.
 
## code:
This program works by first assigning values of x to an array according to user defined parameters: start of
range, end of range, and a difference of x to calculate with. Values of the first derivative are assigned to
a second array which are then used to calculate values of the second derivative. The program can calculate
the derivative in different directions of differences: forward, central, backwards. The program then prints these
values to the file 'derivatives.dat', which can be used by gnuplot to draw the graphs.
```
#include <stdio.h>
#include <math.h>

void derive(); void headr(); void plot();

void main(){
	int s;

	printf("differential of cos(x/2)*cos(x/2):\n\n");
	printf("select direction (1 - forward, 2 - central, 3 - reverse): ");
	scanf(" %d",&s);

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
	y[i] = cos(x[i]/2)*cos(x[i]/2); // function values of given range
	f1[i] = -cos(x[i]/2)*sin(x[i]/2); // analytical function first derivative
	f2[i] = (sin(x[i]/2)*sin(x[i]/2)-cos(x[i]/2)*cos(x[i]/2))/2; // analytical second derivative
	}

	switch(s){
		case 1: // forward differentiation
		 for(i=0 ; i<n ; i++)
		 g[i] = (y[i+1]-y[i])/(x[i+1]-x[i]);
		 for(i=0 ; i<n-2 ; i++)
		 h[i] = (g[i+1]-g[i])/(x[i+1]-x[i]);
		 headr();
	 	 fptr = fopen("derivative.dat","a+");
		 for(i=0 ; i<n-2 ; i++)
		 fprintf(fptr,"%7.2Lf%7.2Lf%15.2Lf%21.2Lf%21.2Lf%20.2Lf\n",x[i],y[i],f1[i],g[i],f2[i],h[i]);
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
```
## forward output:
```
differential of cos(x/2)*cos(x/2):

select direction (1 - forward, 2 - central, 3 - reverse): 1
please define start of range, a: -4
please define end of range, b: 3
please define difference of x, c: 0.04
'derivative.dat' updated!
```
sample of 'derivative.dat':
```
# ________________________________________________________________________________________________
#|  x  || f(x) |        f'(x)       |        f'(x)      ||        f''(x)      |       f''(x)      |
#|     ||      | analytical formula | finite difference || analytical formula | finite difference |
#|_____||______|____________________|___________________||____________________|___________________|
  -4.00   0.17          -0.38                -0.37                 0.33                0.34
  -3.96   0.16          -0.37                -0.36                 0.34                0.36
  -3.92   0.14          -0.35                -0.34                 0.36                0.37
  -3.88   0.13          -0.34                -0.33                 0.37                0.38
  -3.84   0.12          -0.32                -0.31                 0.38                0.40
   ...    ...            ...                  ...                  ...                 ...
   2.76   0.04          -0.19                -0.18                 0.46                0.47
   2.80   0.03          -0.17                -0.16                 0.47                0.48
   2.84   0.02          -0.15                -0.14                 0.48                0.48
   2.88   0.02          -0.13                -0.12                 0.48                0.49
   2.92   0.01          -0.11                -0.10                 0.49                0.49
```
![derivates calculated using forward difference](https://github.com/jnkptl/RTR-105/blob/master/works/3lw_derivative/fpicture_derivative.svg)
## central output:
```
differential of cos(x/2)*cos(x/2):

select direction (1 - forward, 2 - central, 3 - reverse): 2
please define start of range, a: -3
please define end of range, b: 4
please define difference of x, c: 0.01
'derivative.dat' updated!
```
sample of 'derivative.dat':
```
# ________________________________________________________________________________________________
#|  x  || f(x) |        f'(x)       |        f'(x)      ||        f''(x)      |       f''(x)      |
#|     ||      | analytical formula | finite difference || analytical formula | finite difference |
#|_____||______|____________________|___________________||____________________|___________________|
  -2.97   0.01           0.09                 0.09                 0.49                0.49
  -2.96   0.01           0.09                 0.09                 0.49                0.49
  -2.95   0.01           0.10                 0.10                 0.49                0.49
  -2.94   0.01           0.10                 0.10                 0.49                0.49
  -2.93   0.01           0.11                 0.11                 0.49                0.49
   ...    ...            ...                  ...                  ...                 ...
   3.94   0.15           0.36                 0.36                 0.35                0.35
   3.95   0.15           0.36                 0.36                 0.35                0.35
   3.96   0.16           0.37                 0.37                 0.34                0.34
   3.97   0.16           0.37                 0.37                 0.34                0.34
   3.98   0.17           0.37                 0.37                 0.33                0.33
```
![derivates calculated using central difference](https://github.com/jnkptl/RTR-105/blob/master/works/3lw_derivative/cpicture_derivative.svg)
## reverse output:
```
differential of cos(x/2)*cos(x/2):

select direction (1 - forward, 2 - central, 3 - reverse): 3
please define start of range, a: -4
please define end of range, b: 4
please define difference of x, c: 0.02
'derivative.dat' updated!
```
sample of 'derivative.dat':
```
# ________________________________________________________________________________________________
#|  x  || f(x) |        f'(x)       |        f'(x)      ||        f''(x)      |       f''(x)      |
#|     ||      | analytical formula | finite difference || analytical formula | finite difference |
#|_____||______|____________________|___________________||____________________|___________________|
   3.98   0.17           0.37                 0.37                 0.33                0.34
   3.96   0.16           0.37                 0.36                 0.34                0.35
   3.94   0.15           0.36                 0.35                 0.35                0.36
   3.92   0.14           0.35                 0.35                 0.36                0.36
   3.90   0.14           0.34                 0.34                 0.36                0.37
   ...    ...            ...                  ...                  ...                 ...
  -3.86   0.12          -0.33                -0.33                 0.38                0.37
  -3.88   0.13          -0.34                -0.34                 0.37                0.36
  -3.90   0.14          -0.34                -0.35                 0.36                0.36
  -3.92   0.14          -0.35                -0.35                 0.36                0.35
  -3.94   0.15          -0.36                -0.36                 0.35                0.34
```
![derivates calculated using reverse difference](https://github.com/jnkptl/RTR-105/blob/master/works/3lw_derivative/rpicture_derivative.svg)
