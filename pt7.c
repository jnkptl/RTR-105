// exploration of 'arrays' & 'pointers'

#include <stdio.h>

int main()
{

//	int dec_1,dec_2,dec_3;
	int array_num[3];
/*	int &dec_1 = *array_num[0];
	int &dec_2 = *array_num[1];
	int &dec_3 = *array_num[2];
*/
	int *dec_1 = &array_num[0];
	int *dec_2 = &array_num[1];
	int *dec_3 = &array_num[2];
/*
	int *array_num[0] = &dec_1;
	int *array_num[1] = &dec_2;
	int *array_num[2] = &dec_3;
*/
	printf("enter three decimal numbers...\nfirst value: "); // requesting decimal values from user
	scanf("%i",dec_1);
	printf("second value: ");
	scanf("%i",dec_2);
	printf("third value: ");
	scanf("%i",dec_3);

	int sort;
	printf("please select sort order (1 - ascending, 2 - descending): ");
	scanf("%i",&sort);

	switch(sort){
	case 1: // operations for ascending sort order
	//printf("ascending order: ");

	if(*dec_1 < *dec_2){ // a<b
		if(*dec_2 < *dec_3){ // a<b & b<c -> abc
		printf("%i %i %i\n",*dec_1,*dec_2,*dec_3);
		}
		else if(*dec_3 < *dec_1){ // a<b & c<a -> cab
		printf("%i %i %i\n",*dec_3,*dec_1,*dec_2);
		}
		else if(*dec_3 < *dec_2){ // a<b & a<c & c<b -> acb
		printf("%i %i %i\n",*dec_1,*dec_3,*dec_2);
		}
		}

		else{ // b<a
		if(*dec_1 < *dec_3){ // b<a & a<c -> bac
		printf("%i %i %i\n",*dec_2,*dec_1,*dec_3);
		}
		else if(*dec_3 < *dec_2){ // b<a & c<a & c<b -> cba
		printf("%i %i %i\n",*dec_3,*dec_2,*dec_1);
		}
		else if(*dec_3 < *dec_1){ // b<a & b<c & c<a -> bca
		printf("%i %i %i\n",*dec_2,*dec_3,*dec_1);
		}
		}

	break;

/*	case 2: // operations for descending sort order
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

	break;
	}

	printf("first value: %i\n",dec_1);
	printf("second value: %i\n",dec_2);
	printf("third value: %i\n",dec_3);
*/}

	printf("\nvalue of array_num[0] = %i\n",array_num[0]);
	printf("value of array_num[1] = %i\n",array_num[1]);
	printf("value of array_num[2] = %i\n\n",array_num[2]);

	printf("address of array_num[0] = %p\n",&array_num[0]);
	printf("address of array_num[1] = %p\n",&array_num[1]);
	printf("address of array_num[2] = %p\n\n",&array_num[2]);

	printf("value of *dec_1 = %i\n",*dec_1);
	printf("value of *dec_2 = %i\n",*dec_2);
	printf("value of *dec_3 = %i\n\n",*dec_3);

	printf("address of dec_1 = %p\n",dec_1);
	printf("address of dec_2 = %p\n",dec_2);
	printf("address of dec_3 = %p\n\n",dec_3);

	return 0;
}
