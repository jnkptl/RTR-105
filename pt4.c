// factorial task - for(){}
#include <stdio.h>

void select_data();
void int_factorial();
void char_factorial();
void long_factorial();

int main(){

	printf("Hej! Velkommen til mitt faktaprogram!\n");
	select_data();

	return 0;
}

void select_data(){

	char f_char,data;
	int f_int,id;
	long long int f_long;
	printf("please select valid data type...\n1 - int\n2 - char\n3 - long long\nselection: ");
	scanf(" %c",&data);


	switch(data){
	case '1': // user requests int data type
	//printf("please enter value to factorialise: ");
	//scanf("%i",&f_int);
	printf("user selected int data type\n");
	int_factorial();
	break;

	case '2': // user requests char data type
	//printf("please enter value to factorialise: ");
	//scanf(" %c",&f_char);
	printf("user selected char data type\n");
	char_factorial();
	break;

	case '3': // long long data type
	//printf("please enter value to factorialise: ");
	//scanf("%lli",&f_long);
	printf("user selected long long data type\n");
	long_factorial();
	break;

	default:
	printf("\n");
	main();
	break;
	}
}

void int_factorial(){

	int f_int;
	printf("please enter value to factorialise: ");
	scanf(" %i",&f_int);
	printf("value to factoriolise = %i\n",f_int);
}

void char_factorial(){

	char f_char;
	printf("please enter value to factorialise: ");
	scanf(" %c",&f_char);
	printf("value to factoriolise = %c\n",f_char);
}

void long_factorial(){

	long long int f_long;
	printf("please enter value to factorialise: ");
	scanf(" %lli",&f_long);
	printf("value to factoriolise = %lli\n",f_long);
}
