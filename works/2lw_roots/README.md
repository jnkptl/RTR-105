# Lab Work 2 - Numerical Methods - Bisection Method

>"The bisection method is a root-finding method that applies to any continuous functions for which one knows two
values with opposite signs. The method consists of repeatedly bisecting the interval defined by these values and
then selecting the subinterval in which the function changes sign, and therefore must contain a root."

\-Wikipedia

# Bisection Method for intersections with horizontal lines
By modifying the function we are investigating, we can find intersections with a horizontal line.
Where the bisection method analyses the function f(x)=0, modifying the function to be f(x)=c, we can find 
at which x value the function equals c.

## code:
This program investigates where a function and line intersect within a user defined range [a:b] and accuracy
delta_x.
```
#include <stdio.h>
#include <math.h>

float intersect(float a, float b, float c, float delta_x);
void plot(float a, float b, float c, float x);

int main(){
	float a,x,delta_x,b,y,c;

	printf("investigating intersection points (or roots) of cos(x/2)*cos(x/2):\n");

	printf("please define start of range (a): ");
	scanf(" %f",&a);

	printf("please define end of range (b): ");
	scanf(" %f",&b);

	printf("please define a horizontal line (y=c): ");
	scanf(" %f",&c);

	printf("please define precision: ");
	scanf(" %f",&delta_x);
	printf("\n");

	if(c==0.00000)
	 x=intersect(a,b,c,delta_x);
	else
	 x=intersect(a,b,c,delta_x);

	char pr;
	printf("\ncreate gnuplot plot file (y/n)? ");
	scanf(" %c",&pr);
	if(pr=='y')
	 plot(a,b,c,x);
	else if(pr=='n')
	 return 0;

	return 0;
}

float intersect(float a, float b, float c, float delta_x){
	float x, fun_a, fun_b, a0=a, b0=b;
	int k=0;

	fun_a = cos(a/2)*cos(a/2)-c;
	fun_b = cos(b/2)*cos(b/2)-c;

	if(fun_a*fun_b>0){ // if product of f(a), f(b) is positive then there are no roots between a, b
	// if product is negative, a or b is negative and therefore the line passes through the line, y=c
	 printf("in range: %.2f < x < %.2f, f(x)=cos(x/2)*cos(x/2) ",a,b);
	 if(c!=0.000000)
	  printf("does not intersect y=%.2f (or intersects an even number of times)\n",c);
	 else
	  printf("has no roots (or has an even number of roots)\n");
	 return 1;
	}

	while((b-a)>delta_x){
	 k++; //k=k+1;//k+=1;
	 x = (a+b)/2.;
	 if(fun_a*(cos(x/2)*cos(x/2)-c)>0) // comparing midpoint with a and b
	  a=x; // root is left of midpoint
	 else
	  b=x; // root is right of midpoint
	 }

	if(c!=0.000000)
	 printf("cos(x/2)*cos(x/2) intersects y = %2.2f, in range %.2f > x > %.2f, when x=%2.3f\n",c,a0,b0,x);
	else
	 printf("root in range %.2f>x>%.2f is located at x=%.3f, when cos^2(x) is %.3f\n",a0,b0,x,cos(x/2)*cos(x/2));
	printf("verification: f(%.3f) = %f\n",x,cos(x/2)*cos(x/2));
	printf("intersect found in %d steps\n",k);

	return x;
}

void plot(float a,float b,float c,float x){ // to crop graph to given range
	float w = (b-a)*400,h = 800; // h = 800 = (5-(-5))p
	FILE *fptr;
	fptr = fopen("plot_2lw.gp","w+");
	fprintf(fptr,"set term svg size %f,%f enhanced font 'calibri,12' backg 'white'\n",w,h);
	fprintf(fptr,"set output 'img_roots.svg'\n");
	fprintf(fptr,"set key inside bottom right\n");
	fprintf(fptr,"set grid\n");
	fprintf(fptr,"set xrange [%5f:%5f]\n",a,b);
	fprintf(fptr,"set yrange [0:2]\n");
	fprintf(fptr,"unset xlabel\n");
	fprintf(fptr,"unset ylabel\n");
	fprintf(fptr,"set title 'intersection point of y=%2.2f and COS^2(X/2) between %2.2f and %2.2f'\n",c,a,b);
	fprintf(fptr,"plot cos(x/2)*cos(x/2) w lines title 'COS^2(X/2)' lc rgb '#35477d' lw 2,%c\n",92);
	fprintf(fptr,"%.3f w lines title 'y = %2.2f' lc rgb 'black', '-' notitle ls 7 lc 'black'\n",c,c);
	fprintf(fptr,"%.3f %.3f",x,c);
	fclose (fptr);
	printf("'plot_2lw.gp' created!\n");
}
```
## output:
```
investigating intersection points (or roots) of cos(x/2)*cos(x/2):
please define start of range (a): 0
please define end of range (b): 3
please define a horizontal line (y=c): 0.5
please define precision: 0.0001

cos(x/2)*cos(x/2) intersects y = 0.50, in range 0.00 > x > 3.00, when x=1.571
verification: f(1.571) = 0.500013
intersect found in 15 steps

create gnuplot file (y/n)? y
'plot_2lw.gp' created!
```
The following image is a representation of the output:
![gnuplot representation of output](https://github.com/jnkptl/RTR-105/blob/master/works/2lw_roots/img_roots.svg "intersection of line and function")
