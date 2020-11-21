#include <stdio.h>

int main()
{
	char dec1;
	//printf("value of a: %d\n",a);
	printf("type a single decmical value (0-9): ");
	scanf("%c",&dec1);

	char dec2   =  dec1  >> 1;   // 1 divides by 2 [2^1]; z = character decimal value / 2
	char dec4   =  dec2  >> 1;   // 2 divides by 4 [2^2]; y = character decimal value / 4
	char dec8   =  dec4  >> 1;   // 3 divides by 8 [2^3]; x = character decimal value / 8
	char dec16  =  dec8  >> 1;   // 4 divides by 16 [2^4]; w = character decimal value / 16

	char dec32  = dec16  >> 1;
	char dec64  = dec32  >> 1;
	char dec128 = dec64  >> 1;
	char dec256 = dec128 >> 1;

	char ddec2  = dec2 << 1;
	char bin0   = dec1 - ddec2;   // remainder when a divided by 2
	char ddec4  = dec4 << 1;
	char bin1   = dec2 - ddec4;   // remainder when z divided by 2
	char ddec8  = dec8 << 1;
	char bin2   = dec4 - ddec8;  // remainder when y divided by 2
	char ddec16 = dec16 << 1;
	char bin3   = dec8 - ddec16;  // remainder when x divided by 2

	char ddec32 = dec32 << 1;
	char bin4 = dec16 - ddec32;
	printf("ddec32 = %d, dec32 = %d, dec16 = %d, bin4 = %d\n",ddec32,dec32,dec16,bin4);
	char ddec64 = dec64 << 1;
	char bin5 = dec32 - ddec64;
	char ddec128 = dec128 << 1;
	char bin6 = dec64 - ddec128;
	char ddec256 = dec256 << 1;
	char bin7 = dec128 - ddec256;

	//printf("result: z=%d, y=%d, x=%d, w=%d\n",z,y,x,w);
	printf("binary value: %d%d%d%d %d%d%d%d\n",bin7,bin6,bin5,bin4,bin3,bin2,bin1,bin0);

	return 0;
}
