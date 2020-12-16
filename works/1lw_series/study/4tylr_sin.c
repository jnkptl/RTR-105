// a0,a1,a2,a3-> a
#include <stdio.h>
#include <math.h>

int main()
{
	double x=2.05,y,a,S;
	int k=0;
	y = sin(x);
	printf("y=sin(%.2f)=%.2f\n",x,y);

	a = pow(-1,k)*pow(x,2*k+1)/(1.);// a = pow(-1,0)*pow(x,2*0+1)/(1.); // a0 = pow(-1,0)*pow(x,2*0+1)/(1.);
	S = a; // S = a0;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	k++;

	a = a * (-1) *x*x / ((2*k)*(2*k+1)); // a = a * (-1) *x*x / (2*3); // a1 = pow(-1,1)*pow(x,2*1+1)/(1.*1*2*3);
	S = S + a; // S = S + a1; // S1 = a0 + a1; // S =+ a1
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	k++;

	a = a * (-1) *x*x / ((2*k)*(2*2+1)); // a = a * (-1) *x*x / (4*5); // a2 = pow(-1,2)*pow(x,2*2+1)/(1.*1*2*3*4*5);
	S = S + a; // S = S + a2; // S2 = a0 + a1 + a2; // S =+ a2
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	k++;

	a = a * (-1) *x*x / ((2*k)*(2*k+1));// a = a * (-1) *x*x / (6*7); // a3 = pow(-1,3)*pow(x,2*3+1)/(1.*1*2*3*4*5*6*7);
	S = S + a; // S = S + a3; // S3 = a0 + a1 + a2 + a3; // S =+ a3
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

	return 0;
}

