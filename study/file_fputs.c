// fputs
// int fputs ( const char * str, FILE * stream);
// write string to stream
#include <stdio.h>
#define N 256

int main()
{
	FILE * pFile; // pointer to file (output stream)
	char sentence[N]; // declaring array with char data type

	printf("Enter sentence to append: "); // graphic requesting input from user
	fgets(sentence, N, stdin); // reads entered text - C string to be written to stream
	pFile=fopen("mylog.txt", "a"); // opens file to append - file: mylog.txt; a: file to be appended
	fputs(sentence, pFile); // places entered text into file
	fclose(pFile); // closes opened file

	return 0;
}
