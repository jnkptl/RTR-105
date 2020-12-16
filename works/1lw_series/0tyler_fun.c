// function execution using modified sin(x) code. not to be used
#include <stdio.h>
#include <math.h>
double my_fun();
void draw();

void main()
{
	double x2,y,yy;
	printf("cos(x/2)*cos(x/2) calculation:\n");
	printf("please enter value of x: ");
	scanf(" %le",&x2); double x = x2/2;

	y = cos(x2/2)*cos(x2/2);
	printf("f(x) = cos(%.2f/2)cos*(%.2f/2) = %.2f\n",x2,x2,y);

	yy=my_fun(x);
	printf("calculation via function: y=cos(%.2f/2)*cos(%.2f/2) = %.2f\n",x2,x2,yy);

	draw();
}

double my_fun(double x)
{
	double a,S,C; // 'S' is sum; 'a' is function value of n;
	int n=0; // Order;

	a = pow(-1,n)*pow(x,2*n)/(1.);
	S = a;
	C = S*S;
/*	printf("   x\t    g(n)\t     sum\tnth term\n");
	printf("%.2f\t%8.2f\t%8.2f\t%8.2f\n",2*x,a,S,C);
*/
	while(n<=500)
		{
		n++;
		a = a * (-1) *x*x / ((2*n-1)*(2*n));
		S = S + a;
		C = S*S;
//		printf("%.2f\t%8.2f\t%8.2f\t%8.2f\n",x,a,S,C);
		if(n==499)
		printf("a499 = %f\n",C);
		if(n==500)
		printf("a500 = %f\n",C);
		}

	return C;
}

void draw()
{
	printf("\t\t    500\n");
	printf("\t\t_________\n");
	printf("\t\t%c\n\t\t %c\ncos^2(x/2) =\t  >\n\t\t /\n\t\t/________\n",92,92);
	printf("\t\t   n=0\n");
}
