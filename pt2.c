#include <stdio.h>

int main()
{
    char a;
//    printf("value of a: %d\n",a);
    printf("type a single decmical value (0-9): ");
    scanf("%c",&a);
    char z = a >> 1; // divides by 2 [2^1]
    char y = z >> 2; // divides by 4 [2^2]
    char x = y >> 3; // divides by 8 [2^3]
    char w = x >> 4; // divides by 16 [2^4]

    char b = a % 2; // remainder when a divided by 2
    char c = z % 2; // remainder when a divided by 4
    char d = x % 2; // remainder when a divided by 8
    char e = y % 2; // remainder when a divided by 16
    //printf("result: z=%d y=%d x=%d w=%d\n",z,y,x,w);
    printf("binary value: %d%d%d%d",e,d,c,b);
    /*
    verification:
    0 = 0000; 0 = 48
    1 = 0001; 1 = 49
    2 = 0010; 2 = 50
    3 = 0011; 3 = 51
    4 = 0100; 4 = 52
    5 = 0101; 5 = 53
    6 = 0110; 6 = 54
    7 = 0111; 7 = 55
    8 = 1000; 8 = 56
    9 = 1001; 9 = 57
    */
    
    return 0;
}
