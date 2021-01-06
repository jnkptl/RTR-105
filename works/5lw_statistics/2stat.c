// C program for implementation of Bubble sort
#include <stdio.h>

void swap(char *xp, char *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(char arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1 ; i++)
	  // Last i elements are already in place
	  for (j = 0; j < n-i-1; j++)
	    if (arr[j] > arr[j+1])
	      swap(&arr[j], &arr[j+1]);

}

/* Function to print an array */
void printArray(char arr[], int size)
{
	int i;
	for (i=0; i < size ; i++)
	  printf(" %c  ", arr[i]);
	printf("\n");
	for (i=0; i < size ; i++)
	  printf("%03d ", arr[i]);
	printf("\n\n");
}

void minValue(char arr[], int n)
{
	char min = arr[0];
	for(int i = 1 ; i < n ; i++ )
	  if(arr[i] < min)
	    min = arr[i];
	printf("Symbol with minimum value: %c (value = %i)\n",min,min);
}

void maxValue(char arr[], int n)
{
	char max = arr[0];
	for(int i = 1 ; i < n ; i++ )
	  if(arr[i] > max)
	    max = arr[i];
	printf("Symbol with maximum value: %c (value = %i)\n",max,max);
}

void avgValue(char arr[], int n)
{
	int S = arr[0];
	for(int i = 1 ; i < n ; i++ )
	 S = S + arr[i];
	float avg = (float)S / n;
	printf(" Symbol of average value : %c (value = %f)\n",(int)avg,avg);
}

void medValue(char arr[], int n)
{
	float med;
	if(n % 2 == 1)
	{
	  int i = (n/2);
	  med = arr[i];
	  printf("  Median value of string : %c (value = %f)\n",(int)med,med);
	}
	else
	{
	  int i = (n/2)-1;
	  med = ((float)arr[i]+(float)arr[i+1])/2;
	  printf("  Median value of string : %c (value = %f)\n",(int)med,med);
	}
}

void modValue(char arr[], int n)
{
	int mod[n], i, m=1, mode=1;
	for(i=0 ; i < n; i++)
	 if(arr[i]==arr[i+1])
	 {
	  mod[m] = arr[i];
	  m++;
	  }
	for(i=1;i<m;i++)
	  if(mod[i]==mod[i+1])
	printf("mod = %c\n",mod[i]);
}

// Driver program to test above functions
int main()
{
//	char arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n;
	printf("please define length of symbol string: ");
	scanf(" %i",&n);
	char arr[n];
	int i;
	printf("enter %d characters: ",n);
	for(i=0 ; i<n ; i++)
	 scanf(" %c",&arr[i]);

//	n = sizeof(arr)/sizeof(arr[0]);
	printf("Unsorted array: \n");
	printArray(arr, n);

	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);

	minValue(arr,n);
	maxValue(arr,n);
	avgValue(arr,n);
	medValue(arr,n);
	modValue(arr,n);
	return 0;
}
