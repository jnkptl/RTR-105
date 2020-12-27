#include <stdio.h>
#include <math.h>
double my_fun();
double fun();
void draw();
void draw_();
void draw_R();
double fun_a();

void main()
{
	double x;
	printf("cos(x/2)*cos(x/2) calculation:\n");
	printf("please enter x value: ");
	scanf(" %lf",&x);
	printf("\n");
	fun(x);
	draw(x);
	draw_R();
}

double fun(double x) // 0.5 + [sum](-1)^n * (x)^2*n / 2*(2*n)!
{
	long double y,a,S;
	int n = 0;
	y = cos(x/2)*cos(x/2);
	printf("via system:\n");
	printf("%7c(%.2f) = cos^2(%.2f/2) = %.4Lf\n\n",'f',x,x,y);

	printf("via user function:\n");
	a = (0.5)+(pow(-1,n)*pow(x,2*n)/(2.)); // 0! = 1
	S = a;
//	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	printf("  a0 =\t        %2.2Lf;\t   S0 = %2.4Lf\n",a,S);
	n++;

	a = a*((-1)*x*x)/((2*n)*(2*n));
	S = S + a;
//	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	n++;

	while(n<=500){
		a = a*((-1)*x*x)/((2*n)*(2*n-1));
		S = S + a;
//		printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
//		if(n<20){ printf(" a%d =\t %2.2Le;\t S%d = %2.4Lf\n",n,a,n,S); }
		if(n==499)
		 printf("a499 =\t %2.2Le;\t S499 = %2.4Lf\n",a,S);
		if(n==500){
		 printf("a500 =\t  %2.2Le;\t S500 = %2.4Lf\n\n",a,S);
//		 printf("via user function (fun): %8.2Lf\n",S);
		 }
		n++;
	}

	printf("\n");
}

void draw(double x)
{
//	printf("%35s\n","500"); // line 1
	printf("%27c__500___\n",95); //	printf("%30c________\n",95); // line 2
	printf("%27c",92); // line 3
	printf("%17c%4c*n\n",110,50); // line 3
	printf("%16c%8c%4c",49,49,92); // line 4
	printf("%12c-1) * x\n",40); // line 4
	printf("cos^2(x/2) =  ___  +  ___   >%9c____________\n",95); // line 5
	printf("%28c\n",47); // line 6
	printf("%16c%8c%3c________",50,50,47); // line 7
	printf("%7c2*n)!\n",40); // line 7
	printf("%31c=0\n",110); // line 8
}

void draw_R()
{
	printf("\n\n\n");
	printf("%37d\n",2);
	printf("%29c-1) * x\n",40);
	printf("Recurrence multiplier:  _______________\n\n");
	printf("%25c2*n) * (2*n-1)\n\n",40);
}

void draw_()
{
	printf("\t\t\t       500\n");
	printf("\t\t\t   _________\n");
	printf("\t\t\t   %c\n\t\t 1\t 1  %c\ncos^2(x/2) =\t___   +\t___  >\n\t\t 2\t 2  /\n\t\t\t   /________\n",92,92);
	printf("\t\t\t      n=0\n");
}

double fun_a(double x) // 0.5 + [sum](-1)^n * (x)^2*n / 2*(2*n)!
{
	double y,a,S;
	int n = 0;
	y = cos(x/2)*cos(x/2);
	printf("via system: y=cos^2(%.2f/2)=%.2f\n\n",x,y);
	printf("via user function (fun):\n");

	a = (0.5)+(pow(-1,n)*pow(x,2*n)/(2.)); // 0! = 1
	S = a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	n++;

	a = a*((-1)*x*x)/((2*n)*(2*n));
	S = S + a;
	printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
	n++;

	while(n<=4){
		a = a*((-1)*x*x)/((2*n)*(2*n-1));
		S = S + a;
		printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
		n++;
	}
	printf("\n");
}

