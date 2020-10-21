// Operators:
// Operation has result, result is always some type of data
// result type of operation usually is broadest type of data participating in operation
// for instance: %d + %f = %f
// +,-,*,/,%
// a + b

#include <stdio.h>

int main()
{
	char a = 5;
	char b = 10;
// + (addition - adds two values together)
	char c = a + b;
	printf("a+b=%d\n",a+b);
	printf("%d + %d = %d\n",a,b,c);
// / (division - divides one value by another)
	char d = a / b; // char / char -> char
	printf("%d / %d = %d\n",a,b,d); // expect 5 / 10 = 0.5; get 0
	float dd = a / b; // char / char -> char
	printf("%d / %d = %d\n",a,b,dd); // expect 5 / 10 = 0.5; get 0
	printf("%d / %d = %f\n",a,b,dd); // expect 5 / 10 = 0.5; get 0
	float aa = 5;
	dd = aa / b; // float / char -> float -> float
	printf("%.1f / %d = %.1f\n",aa,b,dd); // expect 5 / 10 = 0.5
	d = aa / b; // float / char -> float -> char
	dd = d;
	printf("%f / %d = %f\n",aa,b,dd); // expect 5 / 10 = 0.5; get 0.000000
	printf("(float)%d / %d = %.1f\n",a,b, (float)a / b);
	printf("(float)a / b - result size in bytes - %d\n",sizeof((float)a / b)); // size = 4 bytes

	printf("1. * %d / %d = %.1f\n",a,b, 1. * a / b);
	printf("1. * a / b - result size in bytes - %d\n",sizeof(1. * a / b)); // size = 8 bytes
	// 1 - whole type constant (int)
	// 1. - real data type constant (double)
	// (char)1
	// (float)1

// % (modulus - returns division remainder)
	char e = a % b;
	// printf("%d \% %d = %d\n",a,b,e);
	printf("%d %c %d = %d\n",a,37,b,e); // 5 / 10 = 0r5
	printf("%d %c %d = %d\n",a,0x25,b,e); // 5 / 10 = 0r5
	printf("%d %c %d = %d\n",a,'%',b,e); // 5 / 10 = 0r5
	printf("%d %c %d = %d\n",999,37,990,999%990); // 999 / 990 = 1r9 -> remainder = 9
	printf("%d %c %d = %d\n",999,37,1990,999%1990); // 999 / 1990 = 0r999 -> remainder = 999

	return 0;
}
