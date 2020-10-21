// Operators:
// bit operators: << and >>
// << (left shift - shifts left bits of operand by a specified number)
// >> (right shift - shifts right bits of operand by specified number)

#include <stdio.h>
#include <time.h>

int main()
{
	char a = 5; // 0000 0101
	char b = 5; // number of bits to shift by
	// char c = a << b; // 0|000 0101 << 1 -> 0000 101|0  (0000 1010)
	char c;


	clock_t begin = clock();
	c = a << b; // 0000 1|101 << 5 -> 1010 0000
	//                                -101 1111
	//                                +       1
	//                                 110 0000
	// 1 * 2^5 + 1 * 2^6 = 32 +64 = 96 => final result -96
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("multiplication by 2 with << operation: %g\n", time_spent);
	printf("%d << %d = %d\n",a,b,c);

	begin = clock();
	c = a * 2*2*2*2*2;
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("multiplcation by 2 with * operation: %g\n",time_spent);
	printf("%d * 2 = %d\n",a,c);

/*
	b = 2;
	c = a << b; // 00|00 0101 << 2 -> 0001 01|00  (0001 0100)
	printf("%d << %d = %d\n"a,b,c);
	b = 3;
	c = a << b; // 000|0 0101 << 3 -> 0010 1|000  (0000 1010)
	printf("%d << %d = %d\n",a,b,c);
*/

	a = 100; // 100 / 2 = 50, 50 / 2 = 25, 25 / 2 = 12, 12 / 2 = 6
	b = 4;
	c = a >> b; // b; 0110 |0100 >> 4 -> 0000 0110
	printf("%d >> %d = %d\n",a,b,c);

	return 0;
}
