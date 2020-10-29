#include <stdio.h>
	
int main()
{	
	char a;
	//printf("value of a: %d\n",a);
	printf("type a single decmical value (0-9): ");
	scanf("%c",&a);
	char z = a >> 1; // 1 divides by 2 [2^1]; z = character decimal value / 2
	char y = z >> 1; // 2 divides by 4 [2^2]; y = character decimal value / 4
	char x = y >> 1; // 3 divides by 8 [2^3]; x = character decimal value / 8  
	char w = x >> 1; // 4 divides by 16 [2^4]; w = character decimal value / 16
	
	char Z = z << 1; // Z = z * 2
	char b = a - Z; // remainder when a divided by 2
	char Y = y << 1; // Y = y * 2
	char c = z - Y; // remainder when z divided by 2
	char X = x << 1; // X = x * 2
	char d = y - X; // remainder when y divided by 2
	char W = w << 1; // W = w * 2
	char e = x - W; // remainder when x divided by 2
	//printf("result: z=%d, y=%d, x=%d, w=%d\n",z,y,x,w);
	printf("binary value: %d%d%d%d\n",e,d,c,b);

	return 0;
}
