#include <stdio.h>

int main(){

	int val,int1,int2,int3;
	printf("Håper det går godt med deg!\n\n");
	printf("please enter a number to factorialise (int): ");
	scanf("%i",&val);
	printf("\n");
	//printf("value to factorialise: %i\n",val);

	int1 = int2 = int3 = 1;

	while(val > int3){

	int1 = int1 * int3;
	int2 = int2 * (int3+1);
	int3++;
	// printf("int3 = %i\nval = %i\nint1 = %i\nint2 = %i\n\n",int3,val,int1,in2);

	// printf("just a check!\n");

	if(int2/int1 == int3){
	// printf("if statement true... int1/int2=int3\n");
	}
	else{
	// printf("if statement false...\n");
	printf("failed to calculate factorial of %i\n",val);
	return 0;
	}
	}
	// printf("input factorial = %i, input-1 factorial = %i,\n %i / %i = %i\n\n",ff_int,f_check,ff_int,f_check,(ff_int/f_check));
	// printf("f_check = %i\n\n",f_check);

	//printf("\nf_ = %i\nf_int = %i\nff_int = %i",f_,f_int,ff_int);
	printf("%i! = %i\n",val,int1);

//	int f_chk = ff_int / f_int;
//	printf("%i! = %i / %i = %i\n",f_int-1,ff_int,f_int,f_chk);

	printf("\ninput: %i, result: %i, input-1: %i\n",val,int1,int2);
/*
	if(f_int == ff_int / (ff_int/)){ // if input==yourfactorial/(fac-1)
	printf("factrorialchecked!ok!correct!");
	}
*/

	return 0;
}
