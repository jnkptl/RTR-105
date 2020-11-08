#include <stdio.h>

int main(){

	int val,typ;
	int i1,i2,i3;
	char c1,c2,c3;
	long long int l1,l2,l3;
	i1 = i2 = 1;
	c1 = c2 = 1;
	l1 = l2 = 1;

	// requesting user to enter value
	printf("please enter decimal value to factorialise: ");
	scanf(" %i",&val);

	// check whether user entered postive value
	if(val < 0 ){
	printf("please enter positive integers only\n\n");
	return main();
	}

	// request user to select data type
	printf("please select data type...\n1 - int\n2 - char\n3 - long long\nselection: ");
	scanf(" %i",&typ);

	switch(typ){
	// int factorial function
	case 1:
//	printf("user selected int data type\n");

	for(i3 = 2 ; i3 <= val ; i3++){
	i1 = i1 * i3;
	i2 = i2 * (i3-1);

//	printf("i1 / in3 = %i\ni2 = %i\n",(i1/i3),i2);

	if((i1/i3)==(i2)){
//	printf("if statement true...\n");
	}else{
//	printf("if statement false...\n");
//	printf("i1 / i3 = %i\ni2 = %i\n",(i1/i3),i2);
	printf("\nunable to calculate factorial of %i with selected data type\n",val);
	return 0;}

	} // end of 'for' function

	printf("\n%i! = %i\n",val,i1);

	break; // break of case 1:

	// char factorial function
	case 2:
//	printf("user selected char data type\n");

	for(c3 = 2 ; c3 <= val ; c3++){
	c1 = c1 * c3;
	c2 = c2 * (c3-1);

//	printf("c1 / cn3 = %d\nc2 = %d\n",(c1/c3),c2);

	if((c1/c3)==(c2)){
//	printf("if statement true...\n");
	}else{
//	printf("if statement false...\n");
//	printf("c1 / c3 = %i\nc2 = %d\n",(c1/c3),c2);
	printf("\nunable to calculate factorial of %i with selected data type\n",val);
	return 0;}

	} // end of 'for' function

	printf("\n%i! = %d\n",val,c1);

	break; // break of case 2:

	// long long factorial function
	case 3:
//	printf("user selected long long data type\n");

	for(l3 = 2 ; l3 <= val ; l3++){
	l1 = l1 * l3;
	l2 = l2 * (l3-1);

//	printf("l1 / ln3 = %lli\nl2 = %lli\n",(l1/l3),l2);

	if((l1/l3)==(l2)){
//	printf("if statement true...\n");
	}else{
//	printf("if statement false...\n");
//	printf("l1 / l3 = %lli\nl2 = %lli\n",(l1/l3),l2);
	printf("\nunable to calculate factorial of %i with selected data type\n",val);
	return 0;}

	} // end of 'for' function

	printf("\n%i! = %lli\n",val,l1);

	break; // break of case 3:

	default:
	printf("user selected invalid data type\n");
	return 0;
	} // end of case function

	return 0;
}
