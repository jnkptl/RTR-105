#include <stdio.h>

int main()
{
    char a;
//    printf("value of a: %d\n",a);
    printf("type a single decmical value (0-9): ");
    scanf("%c",&a);
    char z = a >> 1; // 1 divides by 2 [2^1]
    char y = z >> 1; // 2 divides by 4 [2^2]
    char x = y >> 1; // 3 divides by 8 [2^3]
    char w = x >> 1; // 4 divides by 16 [2^4]

    char b = a - z - z; // remainder when a divided by 2
    char c = z - y - y; // remainder when z divided by 2
    char d = y - x - x; // remainder when y divided by 2
    char e = x - w - w; // remainder when x divided by 2
    //printf("result: z=%d, y=%d, x=%d, w=%d\n",z,y,x,w);
    printf("binary value: %d%d%d%d\n",e,d,c,b);
    /*
    0 = 0000 = 48
    1 = 0001 = 49
    2 = 0010 = 50
    3 = 0011 = 51
    4 = 0100 = 52
    5 = 0101 = 53
    6 = 0110 = 54
    7 = 0111 = 55
    8 = 1000 = 56
    9 = 1001 = 57
    */
    
    
    return 0;
}
