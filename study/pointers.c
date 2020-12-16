// address' & pointers & arrays study.

#include <stdio.h>

void sort();
void pointers1();
void pointers2();
void pointers3();
void pointers4();

int main()
{

/*	int less;
	printf("please select program...\n1 - pointers & their sizes & addresses\n2 - pointers & operators\n");
	printf("3 - pointers & pointers\n4 - pointers & user functions\n5 - sort\n");
	printf("selection: ");
	scanf(" %i",&less);

	switch(less)
	{
	case 1:
	pointers1();
	break;
	case 2:
	pointers2();
	break;
	case 3:
	pointers3();
	break;
	case 4:
	pointers4();
	break;
	case 5:
	sort();
	break;
	}
*/
	return 0;
}

void sort()
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


//	printf("first value: %i\nsecond value: %i\nthird value: %i\n",dec_1,dec_2,dec_3);
}

void pointers1()
{
	char a = 'A'; // char:A = bin:0100 0001 = dec:65
	int b = 5;
	double c = 3.6;

	printf("\n             sizeof(function result size) = %lu bytes\n",sizeof(sizeof(a)));
	printf("             sizeof(function result size) = %lu bytes\n",sizeof(sizeof(b)));
	printf("             sizeof(function result size) = %lu bytes\n\n",sizeof(sizeof(c)));

	printf("           value at address of variable a = %d\n",*(&a));
	printf("              index address of variable a = %p\n",&a);
	printf("            size of address of variable a = %lu bytes\n",sizeof(&a));
	printf("   size of value at address of variable a = %lu bytes\n\n",sizeof(*(&a)));

	printf("           value at address of variable b = %d\n",*(&b));
	printf("              index address of variable b = %p\n",&b);
	printf("            size of address of variable b = %lu bytes\n",sizeof(&b));
	printf("   size of value at address of variable b = %lu bytes\n\n",sizeof(*(&b)));

	printf("           value at address of variable c = %.1f\n",*(&c));
	printf("              index address of variable c = %p\n",&c);
	printf("            size of address of variable c = %lu bytes\n",sizeof(&c));
	printf("   size of value at address of variable c = %lu bytes\n\n",sizeof(*(&c)));
}
void pointers2()
{
	int a = 5;
	int *pa = &a;

	printf("           address before change (pa): %p\n",pa);
//	printf("            address before change (a): %p\n",&a);
	printf("  value of variable before change (a): %d\n\n",a);

/*	*pa = *pa + 1;*/ a = a + 1;

	printf("            address after change (pa): %p\n",pa);
	printf("   value of variable after change (a): %d\n",a);
}

void pointers3()
{
	int a = 5;
	int *pa = &a;
	int **ppa = &pa;

	printf("                              value of variable (a): %d\n",a);
	printf("                            address of variable (a): %p\n",&a);
	printf("                           address of variable (pa): %p\n",pa);
//	printf("                            value of variable (*pa): %d\n",*pa);
//	printf("                             value of variable (pa): %d\n",&pa);
//	printf("                          address of variable (&pa): %p\n",&pa);
//	printf("                          value of variable (**ppa): %i\n",**ppa);
	printf("  address where address of variable is stored (ppa): %p\n",ppa);
	printf("                 value at address of pointer (*ppa): %p\n",*ppa);
	printf("                value at address of pointer (**ppa): %p\n",&*ppa);
	printf("    value at address of address of variable (**ppa): %d\n",**ppa);
}

void pointers4_f(int *paa)
{
	printf("              value of variable from function (*paa): %d\n",*paa);
	printf("             address of variable from function (paa): %p\n\n",paa);
	*paa = *paa + 10;
}

void pointers4()
{
	int a = 5;
	int *pa = &a;

	printf("     value of variable from main before function (a): %d\n",a);
	printf("  address of variable from main before function (pa): %p\n\n",pa);
	pointers4_f(pa);
	printf("      value of variable from main after function (a): %d\n",a);
	printf("   address of variable from main after function (pa): %p\n",pa);
}
