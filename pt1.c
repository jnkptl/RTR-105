#include <stdio.h>

int main()
{
    long long int a;
    long long int b;
    printf("type four hundred thousand as a number: ");
    scanf("%lli",&a);
    printf("type one hundred thousand as a number: ");
    scanf("%lli",&b);
    long long int c = a * b;
    printf("%lli * %lli = %lli",a,b,c);
    
    
    return 0;
}
