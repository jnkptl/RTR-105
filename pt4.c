#include <stdio.h>

int main(){

	int val,typ;
	printf("please enter value to factorialise: "); // input request
	scanf(" %i",&val);

	if(val < 0){
	printf("please enter positive values only\n\n");
	return main();
	}

	printf("please select data type...\n1 - int\n2 - char\n3 - long long\nselection: ");
	scanf(" %i",&typ); // data type selection

	int i1,i2,i3;
	char c1,c2,c3;
	long long int l1,l2,l3;

	switch(typ){
	case 1:
	// printf("user selected int data type\n");
	i1 = i2 = i3 = 1;
	// printf("value to factorialise (val) = %i\n",val);
	while(val > i3){
	i1 = i1 * i3;
	i2 = i2 * (i3+1);
	i3++;

	// printf("i1 = %i; i2 = %i; i3 = %i\ni2 / i1 = %i\ni3 = %i\n\n",i1,i2,i3,(i2/i1),i3);

	// printf("entered value = %i!\n%i! = %i\n\n",val,i3-1,i1);

	if(i2/i1==i3){
	// printf("if statement true...\n");
	}else{
	printf("\nunable to calculate factorial of %i with selected data type\n\n",val);
	return 0;
	}}
	// printf("%i! = %i\n",val-1,i1);
	printf("\n%i! = %i\n\n",val,i2);
	break;

	case 2:
	// printf("user selected char data type\n");
	c1 = c2 = c3 = 1;
	// printf("value to factorialise (val) = %d\nc2 = %d\nc3 = %d\n",val,c2,c3);

	while(val > c3){
	c1 = c1 * c3;
	c2 = c2 * (c3+1);
	c3++;

	if(c2/c1==c3){
	// printf("if statement true\n");
	}else{
	printf("\nunable to calculate factorial of %i with selected data type\n\n",val);
	return 0;}}
	printf("\n%i! = %d\n\n",val,c2);
	break;

	case 3:
	// printf("user selected long long int data type\n");
	l1 = l2 = l3 =1;
	// printf("value to factorialise (l1) = %i\n",val);
	while(val > l3){
	l1 = l1 * l3;
	l2 = l2 * (l3+1);
	l3 += 1;

	// printf("l1 = %lli!\nl2 = %lli\nl3 = %lli\n\n",l1,l2,l3);
	if(l2/l1==l3){
	// printf("if statement true\n");
	}else{
	printf("\nunable to calculate factorial of %i with selected data type\n\n",val);
	return 0;}}
	printf("\n%i! = %lli\n\n",val,l2);
	break;

	default:
	printf("please select a valid data type\n\n");
	main();
	break;
	}

	return 0;
	}
