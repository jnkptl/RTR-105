/*
A Taylor Series is an expansion of a function about a point, where each term, a derivative of the function,
with a larger exponent like x, x^2, x^3,...,x^n.

The Taylor Series for f(x)=cos^2(x/2) ?

cos(2x) = 2cos^2(x) - 1

cos^2(x) = (1+cos(2x))/2
*/
#include <stdio.h>
#include <math.h>
double my_fun(); double fun_1(); double fun_2();
double fun_1b(); double fun_2b();

void main()
{
	double x=1.56;
//	fun_2(x);
	fun_1(x);
//	fun_2b(x);
	fun_1b(x);


}

double fun_2b(double x) // 0.5 + 0.5*[sum](-1)^n * (x)^2*n / (2*n)!
{
	double y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun_2b):\n");

	a0 = (0.5)+(0.5)*pow(-1,0)*pow(x,2*0)/(1.); // 0! = 1
	S0 = a0;
	printf("%.2f\t%8.2f\t%8f\n",x,a0,S0);

	a1 = (0.5)*pow(-1,1)*pow(x,2*1)/(1.*2*1);
	S1 = a1 + a0;
	printf("%.2f\t%8.2f\t%8f\n",x,a1,S1);

	a2 = (0.5)*pow(-1,2)*pow(x,2*2)/(1.*4*3*2*1);
	S2 = a2 + a1 + a0;
	printf("%.2f\t%8.2f\t%8f\n",x,a2,S2);

	a3 = (0.5)*pow(-1,3)*pow(x,2*3)/(1.*6*5*4*3*2*1);
	S3 = a3 + a2 + a1 + a0;
	printf("%.2f\t%8.2f\t%8f\n",x,a3,S3);

	a4 = (0.5)*pow(-1,4)*pow(x,2*4)/(1.*8*7*6*5*4*3*2*1);
	S4 = a4 + a3 + a2 + a1 + a0;
	printf("%.2f\t%8.2f\t%8f\n",x,a4,S4);
	printf("\n");
}

double fun_1b(double x) // 1 - [sum](-1)^n+1 * (x)^2*n / 2*(2*n)!
{
	double y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun_1b):\n");

	a0 = 1 - pow(-1,0+1)*pow(x,2*0)/(2.*2*0);
	S0 = a1;
	printf("%.2f\t%8.2f\t%8f\n",x,a1,S1);

	a1 = pow(-1,1+1)*pow(x,2*1)/(2.*2*1);
	S1 = a1;
	printf("%.2f\t%8.2f\t%8f\n",x,a1,S1);

	a2 = pow(-1,2+1)*pow(x,2*2)/(2.*4*3*2*1);
	S2 = a1 + a2;
	printf("%.2f\t%8.2f\t%8f\n",x,a2,S2);

	a3 = pow(-1,3+1)*pow(x,2*3)/(2.*6*5*4*3*2*1);
	S3 = a1 + a2 + a3;
	printf("%.2f\t%8.2f\t%8f\n",x,a3,S3);

	a4 = pow(-1,4+1)*pow(x,2*4)/(2.*8*7*6*5*4*3*2*1);
	S4 = a1 + a2 + a3 + a4;
	printf("%.2f\t%8.2f\t%8f\n",x,a4,S4);
	printf("\n");
}

double fun_2(double x) // 0.5 + 0.5*[sum](-1)^n * (x)^2*n / (2*n)! (calculation spread over sum and term, not efficient)
{
	double y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun_2):\n");

	a0 = pow(-1,0)*pow(x,2*0)/(1.);
	S0 = 0.5+0.5*(a0);
	printf("%.2f\t%8.2f\t%8f\n",x,a0,S0);

	a1 = pow(-1,1)*pow(x,2*1)/(1.*2*1);
	S1 = 0.5+0.5*(a0 + a1);
	printf("%.2f\t%8.2f\t%8f\n",x,a1,S1);

	a2 = pow(-1,2)*pow(x,2*2)/(1.*4*3*2*1);
	S2 = 0.5+0.5*(a0 + a1 + a2);
	printf("%.2f\t%8.2f\t%8f\n",x,a2,S2);

	a3 = pow(-1,3)*pow(x,2*3)/(1.*6*5*4*3*2*1);
	S3 = 0.5+0.5*(a0 + a1 + a2 + a3);
	printf("%.2f\t%8.2f\t%8f\n",x,a3,S3);

	a4 = pow(-1,4)*pow(x,2*4)/(1.*8*7*6*5*4*3*2*1);
	S4 = 0.5+0.5*(a0 + a1 + a2 + a3 + a4);
	printf("%.2f\t%8.2f\t%8f\n",x,a4,S4);
	printf("\n");
}

double fun_1(double x)
{
	double y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n",x,y);
	printf("via user function (fun_1):\n");

	a1 = pow(-1,1+1)*pow(x,2*1)/(2.*2*1);
	S1 = 1 - a1;
	printf("%.2f\t%8.2f\t%8f\n",x,a1,S1);

	a2 = pow(-1,2+1)*pow(x,2*2)/(2.4*3*2*1);
	S2 = 1 - (a1 + a2);
	printf("%.2f\t%8.2f\t%8f\n",x,a2,S2);

	a3 = pow(-1,3+1)*pow(x,2*3)/(2.6*5*4*3*2*1);
	S3 = 1 - (a1 + a2 + a3);
	printf("%.2f\t%8.2f\t%8f\n",x,a3,S3);

	a4 = pow(-1,4+1)*pow(x,2*4)/(2.8*7*6*5*4*3*2*1);
	S4 = 1 - (a1 + a2 + a3 + a4);
	printf("%.2f\t%8.2f\t%8f\n",x,a4,S4);
	printf("\n");
}
