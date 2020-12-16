#include <stdio.h>

int main(){

	FILE *fp;

	//"r" - reading, "w" - writing, "a", "r+" - file exists and can be opened to edit, "w+", "a+"
	fp=fopen("text.data","wt"); // "r","w", "a", "r+", "w+", "a+", + "t" or "b"

	if(fp==NULL)
	 {
	printf("File text.data isn\'t open.\n");
	return 0;
	 }
/*	else
	 {
	 }
*/
	fprintf(fp,"Printing data in file.\n");
	fprintf(fp,"File is open. This is second record in file.\n");

	fclose(fp);

	return 0;
	}
