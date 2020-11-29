// exploration of 'arrays' & 'pointers & 'indexes' & 'addresses' & 'strings'

#include <stdio.h>
#define N 5
void sort();
void array();
void array_over();
void strings();

void strings()
{
	char first_string[8] = "abcdefg";
	char second_string[4] = "ijk";
	char *third_string = "abcdefg";
	int length = 0;
	char *work_pointer = third_string;
	int eg;
	printf("please select example (1 or 2): ");
	scanf(" %i",&eg);
	switch(eg){
	case 1:
	// compiler always uses '\0' as last element (end of line)
	// that is why 7 (from 0th until 6th) symbols we see and last one (the 7th) is '\0'
	// char first_string[8] = "abcdefg"; - would be logical error - wewrite as 7th - 'h'
	// and compiler puts as 8th (outside memory reserved for first string) '\0'
	printf("address (pointer) of an array: %p\n",first_string);
	printf("size of first string - %lu bytes in %lu elements\n",sizeof(first_string),sizeof(first_string)/sizeof(char));
	while( *(first_string+length) != '\0') // that is why sooner or later this loop finishes
	{
		printf("%d. symbol of first array - %c\n",length+1,*(first_string+length));
		length++;
	}

	length = 0;
	printf("\n");
	printf("address (pointer) of second array: %p\n",second_string);
	printf("size of second string - %lu bytes in %lu elements\n",sizeof(second_string),sizeof(second_string)/sizeof(char));
	while( *(second_string+length) != '\0') // that is why sooner or later this loop finishes
	{
		printf("%d. symbol of second array - %c\n",length+1,*(second_string+length));
		length++;
	}
	// ok working, but now + 'h' in first array ...  also working, because in memory first array (bigger) is allocated after second (smaller)
	// and now while observing first array first loop stops only after 'k'...
	// we can suggest  that compiler places shorter array first

	// smaller arrays are allocated in memory before larger arrays

	break;

	case 2:
	// first example - we worked on array with characters previously
	// name_of_array[index_of_element] or *(name_of_array + index_of_element)
	// other possibilty - array of pointers

	// lets use work_pointer for value of third_string stays the same - shows address of 0th element in array
	printf("size of string: %lu bytes in %lu elements\n\n",sizeof(work_pointer),sizeof(work_pointer)/sizeof(char));
	while(*work_pointer != '\0')
	{
	printf("%d. symbol - %3d (address of it in memory - %p)\n",length+1,*work_pointer,work_pointer);
	work_pointer++;
	length++;
	}
	printf("%d. symbol - %3d (address of it in memory - %p)\n",length+1,*work_pointer,work_pointer);
	printf("\n");
	printf("length of symbol string - %d (array is one symbol longer, because of \'\\0\' which we don't see\n",length);
	break;

	default:
	printf("yeah, you broke it\n");
	break;
	}
}

void strings1()
{
}
int main()
{
	int less;
	printf("please select lesson...\n");
	printf("1 - arrays\n2 - strings\n3 - sort (pointers & arrays)\nselection: ");
	scanf(" %i",&less);
	printf("\n");

	switch(less){
	case 1:
	array();
	break;
	case 2:
	strings();
	break;
	case 3:
	sort();
	break;
	default:
	return 0;
	}

	return 0;
}

void sort()
{

//	int dec_1,dec_2,dec_3;
	int array_num[3];
//	int &dec_1 = *array_num[0];
//	int &dec_2 = *array_num[1];
//	int &dec_3 = *array_num[2];

	int *dec_1 = &array_num[0];
	int *dec_2 = &array_num[1];
	int *dec_3 = &array_num[2];

//	int *array_num[0] = &dec_1;
//	int *array_num[1] = &dec_2;
//	int *array_num[2] = &dec_3;

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

	case 2: // operations for descending sort order
	//printf("descending order: ");

	if(*dec_1 > *dec_2){ // a>b
		if(*dec_2 > *dec_3){ // a>b & b>c -> abc
		printf("%i %i %i\n",*dec_1,*dec_2,*dec_3);
		}
		else if(*dec_3 > *dec_1){ // a>b & c>a -> cab
		printf("%i %i %i\n",*dec_3,*dec_1,*dec_2);
		}
		else if(*dec_3 > *dec_2){ // a>b & a>c & c>b -> acb
		printf("%i %i %i\n",*dec_1,*dec_3,*dec_2);
		}
		}

		else{ // b>a
		if(*dec_1 > *dec_3){ // b>a & a>c -> bac
		printf("%i %i %i\n",*dec_2,*dec_1,*dec_3);
		}
		else if(*dec_3 > *dec_2){ // b>a & c>a & c>b -> cba
		printf("%i %i %i\n",*dec_3,*dec_2,*dec_1);
		}
		else if(*dec_3 > *dec_1){ // b>a & b>c & c>a -> bca
		printf("%i %i %i\n",*dec_2,*dec_3,*dec_1);
		}
		}

	break;
		}

	// printf("first value: %i\n",*dec_1);
	// printf("second value: %i\n",*dec_2);
	// printf("third value: %i\n",*dec_3);


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

}

void array()
{
	int area;
	int array_a[N]; // a,b,c,d,e
	int array_b[] = {1,2,3}; // 0th element - 1; 1st element - 2; 2nd element - 3
	int array_c[N] = {4,5,6};
	int array_d[3][2] = {{1,2},{3,4},{5,6}};

	printf("please select area...\n1 - size of arrays\n2 - index of elements\n3 - data overwrite\n");
	printf("4 - undeclared values\n");
	printf("selection: ");
	scanf(" %i",&area);

	switch(area){
	case 1:
	printf("\n");
	printf("	size of array in bytes [datatype]*[n of elements]\n");
	printf("	(eg. int array with 5 elements = 20 bytes) [int-4,char-1,float-8]\n\n");
	printf("		      size of array_a - %lu bytes in %lu elements\n",sizeof(array_a),sizeof(array_a)/sizeof(int));
	printf("		      size of array_b - %lu bytes in %lu elements\n",sizeof(array_b),sizeof(array_b)/sizeof(int));
	printf("		      size of array_c - %lu bytes in %lu elements\n",sizeof(array_c),sizeof(array_c)/sizeof(int));
	printf("		      size of array_d - %lu bytes in %lu elements\n\n",sizeof(array_d),sizeof(array_d)/sizeof(int));
	break;

	case 2:
	printf("\n");
/*	printf("address of array_a: %p\n",array_a);
	printf("value of first element in array_a: %d\n",*array_a);
	printf("address of first element: %p\n",&array_a[0]);
	printf("value of 0th element: %d\n\n",array_a[0]);
*/
	printf("	address and value of array is the same as 0th element of array\n\n");
	printf("             address of array array_b - %p\n",array_b);
	printf("        value of 0th element *array_b - %d\n",*array_b);
	printf("   address of 0th element &array_b[0] - %p\n",&array_b[0]);
	printf("      value of 0th element array_b[0] - %d\n\n",array_b[0]);

	printf("	index of element can be defined either by array[n] or array+n\n\n");
	printf("   address of 1st element &array_b[1] - %p\n",&array_b[1]);
	printf("      value of 1st element array_b[1] - %d\n",array_b[1]);
	printf("    address of 1st element array_b+1  - %p\n",array_b+1);
	printf("    value of 1st element *(array_b+1) - %d\n\n",*(array_b+1));
/*
	printf("   address of 2nd element &array_b[2] - %p\n",&array_b[2]);
	printf("      value of 2nd element array_b[2] - %d\n",array_b[2]);
	printf("    address of 2nd element array_b+2  - %p\n",array_b+2);
	printf("    value of 2nd element *(array_b+2) - %d\n\n",*(array_b+2));
*/	break;

	case 3:
	array_over();
	break;

	case 4:
	printf("\n");
	printf("	elements not declared though previous values have been declared will be assigned a value of 0\n");
	printf("	elements of array with none declared can have any value assigned to it\n\n");
	char arr;
	printf("please select array (a or c): ");
	scanf(" %c",&arr);
	printf("\n");

	switch(arr){
	case 'a':
	printf("      int array_a[N];\n");
	for(int i = 0 ; i<N ; i++)
	{
		char ord,er;
		switch(i){
		case 0:
		ord = 116;
		er = 104;
		break;
		case 1:
		ord = 115;
		er = 116;
		break;
		case 2:
		ord = 110;
		er = 100;
		break;
		case 3:
		ord = 114;
		er = 100;
		break;
		case 4:
		ord = 116;
		er = 104;
		break;
		case 5:
		ord = 116;
		er = 104;
		break;
		}
		printf("      %d%c%c element of array_a = %d\n",i,ord,er,array_a[i]);
	}
	printf("\n");
	break;

	case 'c':
	printf("      int array_c[N] = {4,5,6};\n");
	for(int i = 0 ; i<N ; i++)
	{
		char ord,er;
		switch(i){
		case 0:
		ord = 116;
		er = 104;
		break;
		case 1:
		ord = 115;
		er = 116;
		break;
		case 2:
		ord = 110;
		er = 100;
		break;
		case 3:
		ord = 114;
		er = 100;
		break;
		case 4:
		ord = 116;
		er = 104;
		break;
		case 5:
		ord = 116;
		er = 104;
		break;
		}
		printf("      %d%c%c element of array_c = %d\n",i,ord,er,array_c[i]);
	}
	printf("\n");
	break;

	default:
	printf("\nplease select a valid array\n\n");
	} // end of case switch.
}
}

void array_over(){
	int array_b[] = {1,2,3}; // 0th element - 1; 1st element - 2; 2nd element - 3
	int array_c[N] = {4,5,6};
	printf("\n");
	printf("	system will not check whether an index for an element exists and will assume an address\n");
	printf("	in this case it has taken the address of array_c[0], while array_b[3] does not exist\n\n");
	printf("   address of 3rd element: &array_b[3] - %p\n",&array_b[3]);
	printf("      value of 3rd element: array_b[3] - %d\n",array_b[3]);
//	printf("	system reads value of 0th element of array_c,\n	as system assumes the address of specified index\n");
	printf("    address of 3rd element: array_b+3  - %p\n",array_b+3);
	printf("    value of 3rd element: *(array_b+3) - %d\n\n",*(array_b+3));

	printf("		 address of array_c    - %p\n",array_c);
	printf("     value of 1st element: *array_c    - %d\n",*array_c);
	printf("   address of 1st element: &array_c[0] - %p\n",&array_c[0]);
	printf("      value of 0th element: array_c[0] - %d\n\n",array_c[0]);
}
