// pt6 programming task 6
// 1 - without arguments and without return - void fun()
// 2 - with arguments and without return - void fun(a)
// 3 - without arguments and with return - int fun()
// 4 - with arguments and with return - int fun(b)

#include <stdio.h>

void greet(); // 1
int enter_value(); // 3
int int_factorial(int f_int); // 4
int char_factorial(int f_char); // 4
long long int long_factorial(int f_long); // 4
void task_failed(int fail); // 2

int main(){

	greet();
	int val = enter_value(),data;
	printf("please select data type...\n1 - int\n2 - char\n3 - long long\nselection: ");
	scanf("%i",&data);

	switch(data){
	case 1:
	int_factorial(val);
	break;
	case 2:
	char_factorial(val);
	break;
	case 3:
	printf("\n%i! = %lli\n",val,long_factorial(val));
	break;
	default:
	printf("\ninvalid data type\n");
	return 0;
	}

	return 0;
}

void greet(){ // no arguments & no return - greeting user

	printf("Ceru, ka jums ir labi\n\n");
}

int enter_value(){ // no argument & return - requesting input

	int val;
	printf("please enter decimal value: ");
	scanf(" %i",&val);

	return val;

}

int int_factorial(int f_int){ // arguments & return - calculation of integer factorial

	int int1, int2, int3;
	int1 = int2 = 1;

	for(int3 = 2 ; int3 <= f_int ; int3++){
	int1 = int1 * int3;
	int2 = int2 * (int3-1);

	if(int1/int3==int2){
	}else{
	task_failed(f_int);
	return 0;
	}
	}

	printf("\n%i! = %i\n",f_int,int1);

	return int1;
}

int char_factorial(int f_char){ // arguments & return - calculation of character factorial

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

	printf("\n%d! = %d\n",f_char,char1);

	return char1;

}

long long int long_factorial(int f_long){ // arguments & return - calculation of long long integer factorial

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
}

void task_failed(int fail){ // argument & no return

	printf("\nunable to calculate factorial of %i with selected data type\n\n",fail);
}
