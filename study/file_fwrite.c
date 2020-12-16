// fwrite example: write buffer
#include <stdio.h>

int main()
{
	FILE * pFile;

//	char buffer[] = {'x','y','z'};
	int buffer[] = {'1','2','3'};

	pFile = fopen ("myfile.bin", "wb");
	fwrite (buffer, sizeof(int), sizeof(buffer)/sizeof(int), pFile);

	fclose (pFile);

	return 0;
}
