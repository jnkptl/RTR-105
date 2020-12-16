// logical and, &&, exploration
#include <stdio.h>

int main(){

	int val_1,val_2;
	char rem1,rem2;
/*	printf("please enter two even values: ");
	scanf("%i %i",&val_1,&val_2);
*/
printf("please enter two even values...\nfirst value: ");
scanf("%i",&val_1);
printf("second value: ");
scanf("%i",&val_2);

	rem1 = val_1 % 2;
	rem2 = val_2 % 2;

	if(rem1 > 0){
	//printf("first value odd\n");
	}
	else{
	//printf("first value even\n");
	}


	if(rem2 > 0){
	//printf("second value odd\n");
	}
	else{
	//printf("second value even\n");
	}

	if((rem1 < 1) && (rem2 < 1)){
	printf("\nCongratulations! You can read!\n");}
	else{
	printf("\nYou had one job!\n");}

	return 0;
}
