// S0, S1, S2, S3, S4 -> S
#include <stdio.h>
#include <math.h>
double my_fun(); double fun_a(); double fun_b();

void main()
{
	double x=1.56;
	fun_a(x);
	fun_b(x);


}

double fun_a(double x) // 0.5 + 0.5*[sum](-1)^n * (x)^2*n / (2*n)!
{
	double y,a0,a1,a2,a3,a4,S;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun_a):\n");

	a0 = (0.5)+(0.5)*pow(-1,0)*pow(x,2*0)/(1.); // 0! = 1
	S = a0; // S = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S);

	a1 = (0.5)*pow(-1,1)*pow(x,2*1)/(1.*2*1);
	S = S + a1; // S += a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S);

	a2 = (0.5)*pow(-1,2)*pow(x,2*2)/(1.*4*3*2*1);
	S = S + a2; // S += a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S);

	a3 = (0.5)*pow(-1,3)*pow(x,2*3)/(1.*6*5*4*3*2*1);
	S = S + a3; // S += a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S);

	a4 = (0.5)*pow(-1,4)*pow(x,2*4)/(1.*8*7*6*5*4*3*2*1);
	S = S + a4; // S += a4;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a4,S);
	printf("\n");
}

double fun_b(double x) // 1 - [sum](-1)^n+1 * (x)^2*n / 2*(2*n)!
{
	double y,a0,a1,a2,a3,a4,S;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun_b):\n");

	a0 = (pow(-1,0+1)*pow(x,2*0)/(1)); // 0! = 1, a0 = -0.5, for all values of x
	S = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S);

	a1 = pow(-1,1+1)*pow(x,2*1)/(2.*2*1);
	S = S + a1; // S += a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S);

	a2 = pow(-1,2+1)*pow(x,2*2)/(2.*4*3*2*1);
	S = S + a2; // S += a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S);

	a3 = pow(-1,3+1)*pow(x,2*3)/(2.*6*5*4*3*2*1);
	S = S + a3; // S += a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S);

	a4 = pow(-1,4+1)*pow(x,2*4)/(2.*8*7*6*5*4*3*2*1);
	S = S + a4; // S += a4;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a4,S);
	printf("\n");
}
