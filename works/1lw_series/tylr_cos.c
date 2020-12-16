#include <stdio.h>
#include <math.h>
double my_cos(); void my_fun1(); void my_cos1(); void my_cos2(); void my_cos3(); void my_cos4(); void my_cos5();

void main()
{
	double x,y,yy;
	printf("please define x: ");
	scanf(" %le",&x);
	y = cos(x);
	printf("standard function: y=cos(%.2f)=%.2f\n",x,y);

	yy = my_cos(x);
	printf("user function - y=cos(%.2f)=%.2f\n",x,yy);

}

void my_cos1(double x)
{
	double y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;
	y=cos(x);
	printf("standard cos function: y=cos(%.2f) = %.2f\n",x,y);

	printf(" x\t    f(x)\t     sum\n");
	a0 = pow(-1,0)*pow(x,2*0)/(1.);
	S0 = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S0);

	a1 = pow(-1,1)*pow(x,2*1)/(1.*1*2);
	S1 = a0 + a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S1);

	a2 = pow(-1,2)*pow(x,2*2)/(1.*1*2*3*4);
	S2 = a0 + a1 + a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S2);

	a3 = pow(-1,3)*pow(x,2*3)/(1.*1*2*3*4*5*6);
	S3 = a0 + a1 + a2 + a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S3);

	a4 = pow(-1,4)*pow(x,2*4)/(1.*1*2*3*4*5*6*7*8);
	S4 = a0 + a1 + a2 + a3 + a4;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a4,S4); printf("\n");

}

void my_fun1(double x)
{
	double y,a0,a1,a2,a3,a4,S0,S1,S2,S3,S4;
	y=cos(x);
	printf("standard cos function: y=cos(%.2f) = %.2f\n",x,y);

	printf(" x\t    f(x)\t     sum\n");
	a0 = pow(-1,0)*pow(x,2*0)/(1.);
	S0 = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S0);

	a1 = pow(-1,1)*pow(x,2*1)/(1.*1*2);
	S1 = a0 + a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S1);

	a2 = pow(-1,2)*pow(x,2*2)/(1.*1*2*3*4);
	S2 = a0 + a1 + a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S2);

	a3 = pow(-1,3)*pow(x,2*3)/(1.*1*2*3*4*5*6);
	S3 = a0 + a1 + a2 + a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S3);

	a4 = pow(-1,4)*pow(x,2*4)/(1.*1*2*3*4*5*6*7*8);
	S4 = a0 + a1 + a2 + a3 + a4;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a4,S4); printf("\n");

}

void my_cos2(double x)
{
	double y,a0,a1,a2,a3,S0,S1,S2,S3;
	y=cos(x);
	printf("standard cos function: y=cos(%.2f) = %.2f\n",x,y);

	a0 = pow(-1,0)*pow(x,2*0)/(1.);
	S0 = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S0);

	a1 = pow(-1,1)*pow(x,2*1)/(1.*1*2);
	S1 = a0 + a1;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S1);

	a2 = pow(-1,2)*pow(x,2*2)/(1.*1*2*3*4);
	S2 = a0 + a1 + a2;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S2);

	a3 = pow(-1,3)*pow(x,2*3)/(1.*1*2*3*4*5*6);
	S3 = a0 + a1 + a2 + a3;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S3);


}

double my_cos(double x)
{
	double a,S; // S is sum; a is function value of n;
	int n=0; // Order;

	a = pow(-1,n)*pow(x,2*n)/(1.);
	S = a;
	printf("   x\t    g(n)\t     sum\n");
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

	while(n<3)
		{
		n++;
		a = a * (-1) *x*x / ((2*n-1)*(2*n));
		S = S + a;
		printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
		}
	return S;
}

void body()
{
}
