#include <stdio.h>

int main()
{
	char char_1,char_2,char_3;
	printf("please type three letters:\n first letter: ");
	scanf(" %c",&char_1);
	printf(" second letter: ");
	scanf(" %c",&char_2);
	printf(" third letter: ");
	scanf(" %c",&char_3);

	int sort;
	printf("please select sort order (1 - a-z, 2 - z-a): ");
	scanf("%i",&sort);

	if(sort == 1){ // operations for ascending sort order
	//printf("ascending order: ");

	if(char_1 < char_2){ // a<b
		if(char_2 < char_3){ // a<b & b<c -> abc
		printf("%c %c %c\n",char_1,char_2,char_3);
		}
		else if(char_3 < char_1){ // a<b & c<a -> cab
		printf("%c %c %c\n",char_3,char_1,char_2);
		}
		else if(char_3 < char_2){ // a<b & a<c & c<b -> acb
		printf("%c %c %c\n",char_1,char_3,char_2);
		}
		}

		else{ // b<a
		if(char_1 < char_3){ // b<a & a<c -> bac
		printf("%c %c %c\n",char_2,char_1,char_3);
		}
		else if(char_3 < char_2){ // b<a & c<a & c<b -> cba
		printf("%c %c %c\n",char_3,char_2,char_1);
		}
		else if(char_3 < char_1){ // b<a & b<c & c<a -> bca
		printf("%c %c %c\n",char_2,char_3,char_1);
		}
		}

	}

	else if(sort == 2) { // operations for descending sort order
	//printf("descending order: ");

	if(char_1 > char_2){ // a>b
		if(char_2 > char_3){ // a>b & b>c -> abc
		printf("%c %c %c\n",char_1,char_2,char_3);
		}
		else if(char_3 > char_1){ // a>b & c>a -> cab
		printf("%c %c %c\n",char_3,char_1,char_2);
		}
		else if(char_3 > char_2){ // a>b & a>c & c>b -> acb
		printf("%c %c %c\n",char_1,char_3,char_2);
		}
		}

		else{ // b>a
		if(char_1 > char_3){ // b>a & a>c -> bac
		printf("%c %c %c\n",char_2,char_1,char_3);
		}
		else if(char_3 > char_2){ // b>a & c>a & c>b -> cba
		printf("%c %c %c\n",char_3,char_2,char_1);
		}
		else if(char_3 > char_1){ // b>a & b>c & c>a -> bca
		printf("%c %c %c\n",char_2,char_3,char_1);
		}
		}

	}
/*
	printf("first letter : %c\n",char_1);
	printf("second letter : %c\n",char_2);
	printf("third letter : %c\n",char_3);
*/
	return 0;
}
