#include <stdio.h>

int main()
{
	char a;
	printf("type character to translate: ");
	scanf("%c",&a);
	printf("character: %c\n",a);
	printf("character as decimal value: %d\n",a);
	printf("character as hexadecimal value: 0x%x\n",a);
	printf("character as octogonal value: %o\n",a);

	return 0;
}
