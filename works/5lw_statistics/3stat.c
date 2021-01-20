// C program for implementation of Bubble sort
#include <stdio.h>
#define N 100

void swap();
void printArray(char arr[], int n);
void bubbleSort(char arr[], int n);
void minValue(char arr[], int n);
void maxValue(char arr[], int n);
void avgValue(char arr[], int n);
void medValue(char arr[], int n);
void modValue(char arr[], int n);

// Driver program to test above functions
int main()
{

	int n, i;

	printf("program to sort and evaluate user defined string:\n\n");

	char buff[N];
	printf("please enter string: ");
//	gets(buff);
	fgets(buff, N, stdin);
	printf("string = %s\n",buff);

	for(i=0 ; (int)buff[i]!=10 ; i++)
	  n=i;
	n = n + 1;

	printf("n=%d\n",n);
	char arr[n];
	for(i=0 ; i<n ; i++)
	  arr[i] = buff[i];
//	n = sizeof(arr)/sizeof(arr[0]);

/*	printf("please define length of symbol string: "); // cannot use this; though compiler will not allow gets();
	scanf(" %i",&n);
	char arr[n];

	printf("type %d characters: ",n);
//	n = sizeof(arr)/sizeof(char);
//	printf("n = %d\n",n);
	for(i=0 ; i<n ; i++)
	 scanf(" %c",&arr[i]);
	printf("\n");
*/

	printf("Unsorted array: \n");
	printArray(arr, n);

	bubbleSort(arr, n);

	minValue(arr,n);
	maxValue(arr,n);
	avgValue(arr,n);
	medValue(arr,n);
	modValue(arr,n);

	printf("Sorted array: \n");
	printArray(arr, n);

	return 0;
}

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
	printf("symbol with minimum value: %c\nminimum value (int) = %i\n\n",min,min);
}

void maxValue(char arr[], int n)
{
	char max = arr[0];
	for(int i = 1 ; i < n ; i++ )
	  if(arr[i] > max)
	    max = arr[i];
	printf("symbol with maximum value: %c\nmaximum value (int) = %i\n\n",max,max);
}

void avgValue(char arr[], int n)
{
	int S = arr[0];
	for(int i = 1 ; i < n ; i++ )
	 S = S + arr[i];
	float avg = (float)S / n;
	printf("symbol of average value: %c\naverage value (float) = %f\n\n",(int)avg,avg);
}

void medValue(char arr[], int n)
{
	float med;
	if(n % 2 == 1)
	{
	  int i = (n/2);
	  med = arr[i];
	  printf("median value of string: %c\nmedian value (float) = %f\n\n",(int)med,med);
	}
	else
	{
	  int i = (n/2)-1;
	  med = ((float)arr[i]+(float)arr[i+1])/2;
	  printf("median value of string: %c\nmedian value (float) = %f\n\n",(int)med,med);
	}
}

void modValue(char arr[], int n)
{
	int mod[n], i, m=1, count=1, max=0, c;
	mod[0]=0;

	// counts occurences of each value using sorted array
	for(i=0 ; i < n; i++)
	  if(arr[i]==arr[i+1]){
	    count++;
	  }
	 else{
	   mod[m] = count;
	   m++;
	   count++;
	 }

	// compares counts for each value
	for(i=1 ; i<m ; i++){
	  if((mod[i]-mod[i-1])>max){ // n > n-1
	    max = (mod[i]-mod[i-1]);
	  }
	}

	// prints highest value(s)
	if(max==1)
	  printf("each symbol occurs once in string\n\n");
	else if(max>1){
	  printf("modal value(s) of string:");
	  for(i=0, c=0 ; i<m ; i++){
	    if(max==mod[i+1]-mod[i] && c==0){ // mod[i]-mod[i-1] = count of ith unique value
	      printf(" %c",arr[mod[i]]);
	      c++;
	    }
	    else if(max==mod[i+1]-mod[i] && c>=1){ // mod[i]-mod[i-1] = count of ith unique value
	      printf(", %c",arr[mod[i]]);
	      c++;
	    }
	  }
	  printf("\n");
	  if(c==1)
	    printf("occurs %d times\n\n",max);
	  else if(c>1)
	    printf("occur %d times\n\n",max);
	}
}
