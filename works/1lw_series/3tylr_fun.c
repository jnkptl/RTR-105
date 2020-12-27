// a0, a1, a2, a3, a4 -> a
#include <stdio.h>
#include <math.h>
double my_fun(); double fun(); double fun_a();

void main()
{
	double x=1.56;
	fun(x);
	fun_a(x);


}

double fun(double x) // 0.5 + [sum](-1)^n * (x)^2*n / 2*(2*n)!
{
	double y,a,S;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun):\n");

	a = 1;	// a = (0.5)+(pow(-1,0)*pow(x,2*0)/(2.)); // 0! = 1
	S = a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

	a = a*((-1)*x*x)/(2.*2);
	S = S + a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

	a = a*((-1)*x*x)/(4*3);
	S = S + a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

	a = a*((-1)*x*x)/(6*5);
	S = S + a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

	a = a*((-1)*x*x)/(8*7);
	S = S + a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	printf("\n");
}

double fun_a(double x)
{
	double y,a0,a1,a2,a3,a4,S;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun_a):\n");

	a0 = (0.5)+(pow(-1,0)*pow(x,2*0)/(2.)); // 0! = 1
	S = a0; // S = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S);

	a1 = pow(-1,1)*pow(x,2*1)/(2.*2*1);
	S = S + a1; // S += a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S);

	a2 = pow(-1,2)*pow(x,2*2)/(2.*4*3*2*1);
	S = S + a2; // S += a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S);

	a3 = pow(-1,3)*pow(x,2*3)/(2.*6*5*4*3*2*1);
	S = S + a3; // S += a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S);

	a4 = pow(-1,4)*pow(x,2*4)/(2.*8*7*6*5*4*3*2*1);
	S = S + a4; // S += a4;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a4,S);
	printf("\n");
}
