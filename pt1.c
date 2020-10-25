#include <stdio.h>

int main()
{
	long a,b;
	printf("type four hundred thousand as a number: ");
	scanf("%li",&a);
	printf("type one hundred thousand as a number: ");
	scanf("%li",&b);
	long c = a * b;
	printf("%li * %li = %li\n",a,b,c);

	return 0;
}
