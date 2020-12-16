// fgets
// char * fgets ( char * str, int num, FILE * stream );
// get string from stream
#include <stdio.h>
#define N 100

int main()
{
	FILE * pFile; // pointer to file (stream)
	char mystring[N];

	pFile = fopen ("myfile.txt", "r"); // opens stream to read - myfile.txt; r - file opened to read
	if (pFile == NULL) // if function to execute when file is not found
	 {
	perror ("Error opening file/n");
	return 0;
	 }
/*	else {
	 if (fgets(mystring,N,pFile) !=NULL)
	  puts(mystring);
	 fclose(pFile);
	} */

	while ( fgets (mystring, N, pFile) !=NULL )
 //puts (mystring);
	fputs (mystring,pFile);

	fclose(pFile);

	return 0;
}
