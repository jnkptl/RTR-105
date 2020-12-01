#include <stdio.h>
#define N 10

int main()
{
	float a,b,c;
	float x,y;
//	float a[N];
//	float b[N];
	int stop = 0;

	FILE *fptr;
	fptr = fopen("data.txt","w+");

	printf("please define range...\nstart: ");
	scanf(" %f",&a);
	printf("end: ");
	scanf(" %f",&c);
	float diff = c - a;
	float pnt = diff / 10;
	// b-a / 11
//	b = c;

//	printf("\n");
	fprintf(fptr,"#x	x^2\n");

//	printf("	diff = %f\n	pnt = %f\n",diff,pnt);
	float i = a;

	while(i<c+1)
		{
		x = i;
		y = i*i;
		fprintf(fptr,"%.2f	%.2f\n",x,y);
		stop++;
		i = i + pnt;
		if(stop==11)
		 {return 0;}
		}

//	printf("%.2f	%.2f\n",i,c);

//	printf("\n");

	fclose (fptr);
	return 0;
}
