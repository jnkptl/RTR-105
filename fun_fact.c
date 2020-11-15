// pt6 programming task 6
// 1 - without arguments and without return - void fun()
// 2 - with arguments and without return - void fun(a)
// 3 - without arguments and with return - int fun()
// 4 - with arguments and with return - int fun(b)

#include <stdio.h>

void greet(); // 1
int enter_value(); // 3
int select_data(); // 3
int int_factorial(int f_int); // 4
int char_factorial(int f_char); // 4
long long int long_factorial(int f_long); // 4
void task_failed(int fail); // 2

int main(){

	greet();

	int val = enter_value();

	//printf("value = %i\n",val);

	int data = select_data();

	switch(data){
	case 1:
	//int_factorial(val);
	printf("\n%i! = %i\n",val,int_factorial(val));
	break;
	case 2:
	printf("\n%i! = %d\n",val,char_factorial(val));
	//char_factorial(val);
	break;
	case 3:
	printf("\n%i! = %lli\n",val,long_factorial(val));
	//long_factorial(val);
	break;
	}


	// printf("int2 = %i, from main()\n",int_factorial());

	return 0;
}

void greet(){

	printf("Ceru, ka jums ir labi\n\n");
}

int enter_value(){

	int val;
	// requesting value from user
	printf("please enter value: ");
	scanf(" %i",&val);

	return val;

}

int select_data(){

	char f_char,data;
	int f_int,id;
	long long int f_long;
	printf("please select data type...\n1 - int\n2 - char\n3 - long long\nselection: ");
	scanf(" %c",&data);


	switch(data){
	case '1': // user requests int data type
	//printf("please enter value to factorialise: ");
	//scanf("%i",&f_int);
//	printf("user selected int data type\n");
	// int_factorial();
	return 1;
	break;

	case '2': // user requests char data type
	//printf("please enter value to factorialise: ");
	//scanf(" %c",&f_char);
//	printf("user selected char data type\n");
	//char_factorial();
	return 2;
	break;

	case '3': // long long data type
	//printf("please enter value to factorialise: ");
	//scanf("%lli",&f_long);
//	printf("user selected long long data type\n");
	//long_factorial();
	return 3;
	break;

	default:
	printf("\n");
	main();
	break;
	}
}

int int_factorial(int f_int){

	int int1, int2, int3;
	int1 = int2 = 1;
	// int enter_value();
	// val = enter_value();
	// printf("val = %i, from int_factorial()\n",f_int);
	// printf("please enter value to factorialise: ");
	// scanf(" %i",&f_int);
	// printf("value to factoriolise = %i\n",f_int);

	for(int3 = 2 ; int3 <= f_int ; int3++){
	int1 = int1 * int3;
	int2 = int2 * (int3-1);

	if(int1/int3==int2){
	// printf("if statement true...\n");
	}else{
	// printf("if statement false...\n");
	// printf("\nunable to calculate factorial of %i with selected data type\n",f_int);
	task_failed(f_int);
	return 0;
	} // close 'if' function

	} // close 'for' function

	// printf("int1 = %i,\nint2 = %i,\nint3 = %i\n",int1,int2,int3);
	// printf("int2 / int1 = %i\n",int3);

//	printf("\n%i! = %i\n",f_int,int1);

	return int1;
}

int char_factorial(int f_char){

	char char1, char2, char3;
	char1 = char2 = 1;

	for(char3 = 2 ; char3 <= f_char ; char3++){
	char1 = char1 * char3;
	char2 = char2 * (char3-1);

	if(char1/char3==char2){
	}else{
	task_failed(f_char);
	return 0;
	} // close 'if' function

	} // close 'for' function

	return char1;

/*	//char f_char;
	//printf("please enter value to factorialise: ");
	//scanf(" %c",&f_char);
	printf("value to factorialise = %d\n",f_char);
	return 0;
*/
}

long long int long_factorial(int f_long){

	long long int long1, long2, long3, lng;
	long1 = long2 = 1;
	lng = f_long;

	for(long3 = 2 ; long3 <= lng ; long3++){
	long1 = long1 * long3;
	long2 = long2 * (long3-1);

	if(long1/long3==long2){
	}else{
	task_failed(f_long);
	return 0;
	} // close 'if' function

	} // close 'for' function

	return long1;

/*	long long int l_val;
	l_val = f_long;
	//long long int f_long;
	//printf("please enter value to factorialise: ");
	//scanf(" %lli",&f_long);

	printf("value to factorialise = %lli\n",l_val);
	return 0;
*/
}

void task_failed(int fail){

	printf("\nunable to calculate factorial of %i with selected data type\n\n",fail);
	// exeunt();
}

int exeunt(){
	return 0;
}
