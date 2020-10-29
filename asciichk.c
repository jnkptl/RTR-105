#include <stdio.h>

int main()
{
	char a;
	printf("type character to translate: ");
	scanf("%c",&a);
//	printf("character: %c\n",a);
	printf("character as decimal value: %d\n",a);
	printf("character as hexadecimal value: 0x%x\n",a);
	printf("character as octogonal value: %o\n",a);

	char z = a >> 1;
	char y = z >> 1;
	char x = y >> 1;
	char w = x >> 1;
	char v = w >> 1;
	char u = v >> 1;
	char t = u >> 1;
	char s = t >> 1;

	char zz = z << 1;
	char b = a - zz;
	char yy = y << 1;
	char c = z - yy;
	char xx = x << 1;
	char d = y - xx;
	char ww = w << 1;
	char e = x - ww;

	char vv = v << 1;
	char f = w - vv;
	char uu = u << 1;
	char g = v - uu;
	char tt = t << 1;
	char h = u - tt;
	char ss = s << 1;
	char i = t - ss;

	printf("character as binary: %d%d%d%d %d%d%d%d\n",i,h,g,f,e,d,c,b);

	return 0;
}
