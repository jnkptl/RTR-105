# Lab Work 1 - Numerical Methods - Taylor Series

>"The Taylor series of a function is an infinite sum of terms that are expressed in terms of the function's
derivatives at a single point. For most common functions, the function and the sum of its Taylor series are
equal near this point."

\- Wikipedia

# Taylor series
The taylor series of a function using only _n_ terms, or partial sum, can be used to approximate value of a
function at a certain point without using the actual function. Increasing the number of terms in a taylor
polynomial increases the accuracy of function.

![Taylor series of cos^2(x/2)](https://github.com/jnkptl/RTR-105/blob/master/works/1lw_series/img_taylor_series_23.svg "Taylor series of different orders")
The above image shows how taylor polynomials of different orders become closer to its investigated function
as the numer of terms increases.

Analysing the taylor series of cos^2(x/2), we find that we can multiply terms by the taylor series' recurrence factor.
Which reduces the program to a loop.

## code
By taking the taylor series function of cos^2(x/2) we can calculate the value of the function at a point using
only operations available to computers.

The program takes a user defined value for x and analyses the first order polynomial. Which can then be used
to find the subsequent terms by multipying by the recurrence factor, while taking the sum of each term.

```
#include <stdio.h>
#include <math.h>

double fun();
void draw();

void main()
{
	double x;
	printf("cos(x/2)*cos(x/2) calculation:\n");
	printf("please enter value of x (in radians, can be any value from -inf to +inf): ");
	scanf(" %lf",&x);
	printf("\n");
	fun(x);
	draw(x);
}

double fun(double x) // 0.5 + [sum](-1)^n * (x)^2*n / 2*(2*n)!
{
	long double y,a,S;
	int n = 0;
	y = cos(x/2)*cos(x/2);
	
	printf("via system:\n");
	printf("%7c(%.2f) = cos^2(%.2f/2) = %.4Lf\n\n",'f',x,x,y);
	
	printf("via user function:\n");
	a = (0.5)+(1*1)/(2.*1)); // 0! = 1
	S = a;
	printf(" a0 =\t %2.2Lf;\t S0 = %2.4Lf\n",a,S);
	n++;
	a = a*((-1)*x*x)/((2*n)*(2*n));
	S = S + a;
	n++;
	while(n<=500){
		a = a*((-1)*x*x)/((2*n)*(2*n-1));
		S = S + a;
		if(n==499)
			printf("a499 =\t %2.2Le;\t S499 = %2.4Lf\n",a,S);
		if(n==500){
			printf("a500 =\t %2.2Le;\t S500 = %2.4Lf\n\n",a,S);
		}
		n++;
	}
	printf("\n");
}

void draw(double x)
{
	printf("%27c__500___\n",95);
	printf("%27c",92);
	printf("%17c%4c*n\n",110,50);
	printf("%16c%8c%4c",49,49,92);
	printf("%12c-1) * x\n",40);
	printf("cos^2(x/2) = ___ + ___ >%9c____________\n",95);
	printf("%28c\n",47);
	printf("%16c%8c%3c________",50,50,47);
	printf("%7c2*n)!\n",40);
	printf("%31c=0\n",110);
	printf("\n\n\n");
	printf("%36d\n",2);
	printf("%28c-1) * x\n",40);
	printf("Recurrence multiplier: _______________\n\n");
	printf("%25c2*n) * (2*n-1)\n\n",40);
}
```
Output:
```
cos(x/2)*cos(x/2) calculation:
please enter x value (radians): 0.53

via system:
      f(0.53) = cos^2(0.53/2) = 0.9314

via user function:
  a0 =          1.00;      S0 = 1.0000
a499 =   -8.34e-2838;    S499 = 0.9314
a500 =    2.35e-2844;    S500 = 0.9314


                          ___500___
                          \                n   2*n
               1       1   \           (-1) * x
cos^2(x/2) =  ___  +  ___   >        _____________
                           /
               2       2  /________      (2*n)!
                              n=0



                                   2
                           (-1) * x
Recurrence multiplier:  _______________

                        (2*n) * (2*n-1)

```
