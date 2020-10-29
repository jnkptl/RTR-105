/*
exploration of 'if(){}' function
basic:
if(condition){code to executed if condition is true}

if(){};else{}:
if(condition){act. if cond. is true}
else {act. if cond. is false}

if(){};else if(){};else{}:
if(cond.){act. if cond. true} // if false; observes secondary condition
else if(secondary cond.){act. if cond.2 true}
else{act. if cond.2 false}
*/

#include <stdio.h>

int main()
{
	int dec_1,dec_2,dec_3;
	printf("enter three decimal numbers...\nfirst value: "); // requesting decimal values from user
	scanf("%i",&dec_1);
	printf("second value: ");
	scanf("%i",&dec_2);
	printf("third value: ");
	scanf("%i",&dec_3);

	int sort;
	printf("please select sort order (1 - ascending, 2 - descending): ");
	scanf("%i",&sort);

	if(sort == 1){ // operations for ascending sort order
	//printf("ascending order: ");

	if(dec_1 < dec_2){ // a<b
		if(dec_2 < dec_3){ // a<b & b<c -> abc
		printf("%i %i %i\n",dec_1,dec_2,dec_3);
		}
		else if(dec_3 < dec_1){ // a<b & c<a -> cab
		printf("%i %i %i\n",dec_3,dec_1,dec_2);
		}
		else if(dec_3 < dec_2){ // a<b & a<c & c<b -> acb
		printf("%i %i %i\n",dec_1,dec_3,dec_2);
		}
		}

		else{ // b<a
		if(dec_1 < dec_3){ // b<a & a<c -> bac
		printf("%i %i %i\n",dec_2,dec_1,dec_3);
		}
		else if(dec_3 < dec_2){ // b<a & c<a & c<b -> cba
		printf("%i %i %i\n",dec_3,dec_2,dec_1);
		}
		else if(dec_3 < dec_1){ // b<a & b<c & c<a -> bca
		printf("%i %i %i\n",dec_2,dec_3,dec_1);
		}
		}

	}

	else if(sort == 2) { // operations for descending sort order
	//printf("descending order: ");

	if(dec_1 > dec_2){ // a>b
		if(dec_2 > dec_3){ // a>b & b>c -> abc
		printf("%i %i %i\n",dec_1,dec_2,dec_3);
		}
		else if(dec_3 > dec_1){ // a>b & c>a -> cab
		printf("%i %i %i\n",dec_3,dec_1,dec_2);
		}
		else if(dec_3 > dec_2){ // a>b & a>c & c>b -> acb
		printf("%i %i %i\n",dec_1,dec_3,dec_2);
		}
		}

		else{ // b>a
		if(dec_1 > dec_3){ // b>a & a>c -> bac
		printf("%i %i %i\n",dec_2,dec_1,dec_3);
		}
		else if(dec_3 > dec_2){ // b>a & c>a & c>b -> cba
		printf("%i %i %i\n",dec_3,dec_2,dec_1);
		}
		else if(dec_3 > dec_1){ // b>a & b>c & c>a -> bca
		printf("%i %i %i\n",dec_2,dec_3,dec_1);
		}
		}

	}

/*
	printf("first value: %i\n",dec_1);
	printf("second value: %i\n",dec_2);
	printf("third value: %i\n",dec_3);
*/
	return 0;
}
