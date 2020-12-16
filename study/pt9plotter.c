// program to create "data.txt" for gnuplot
#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
	int a,b;
	FILE *fptr;
//	int buffer[N];

//	buffer = char* ("start of range = %d\nend of range = %d\n",a,b);
//	buffer = "start of range = %d\nend of range: %d\n",a,b;

	fptr = fopen("data.txt","w+"); // ptr = fopen ("fileopen","mode");

	if(fptr == NULL)
	{
	printf("Error!");
	exit(1);
	}

	printf("please define range...\nstart: ");
	scanf(" %i",&a);

	printf("end: ");
	scanf(" %i",&b);

	for(int i=11;i>0;i--)
	{
	fprintf(fptr,"%d	%d\n",a,b); // x	x*x
	}

//	fwrite(buffer, sizeof(char), sizeof(buffer), pFile);
//	fclose(pFile);

//	pFile=fopen("data.txt","a");
//	fputs(buffer,pFile);


//	fwrite (buffer, sizeof(int), sizeof(buffer)/sizeof(int), pFile);

	fclose (fptr);

	return 0;
}
