/*
FILE *fp - pointer to file

fopen("[filename]","[purpsose(read,write)]") - open file

fprintf - send data to file
fscanf - read one row

fseek -

fputc - put one symbol
fgetc - get one symbole string

fputs - put one symbol
fgets - get one symbole string

fwrite -
fread -

fclose() - close file

fflush(stdout) - ??

perror - print error
*/
// write text file directly - then ask user to enter a
// word to find in entire file and try to write an algorithm
// (a) how to find one word in sentence.
// (b) how to find one word in file.


#include <stdio.h>
#define N 100
void output1();
void output2();
void output3();


int main()
	{
	int out;
	printf("Read text.data file\n");
	printf("Please select output process...\n1 - fseek\n2 - fgetc\n3 - fgets\nselection: ");
	scanf("%i",&out);

	 switch(out){
	 case 1:
	 output1();
	 break;
	 case 2:
	 output2();
	 break;
	 case 3:
	 output3();
	 break;
	 default:
	 printf("\nI don't know what you're doing.\n\n");
	 break;
	 }
	return 0;
	}

void output1()
	{

	FILE *fp;
	char ch,buffer[N];

	//"r" - read, "w" - write, "a" - append, "r+" - read / update, "w+" write / update, "a+" - append  / update
	fp=fopen("text.data","r"); // "r","w", "a", "r+", "w+", "a+", + "t" or "b"

	if(fp==NULL)
	 {
	 printf("File text.data isn\'t open.\n");
	 }

	printf("\n");
	fscanf(fp,"%[^\n]s",buffer);
	printf("First row from text.data file: %s\n",buffer);
	fscanf(fp,"%[^\n]s",buffer);
	printf("Second row from text.data file: %s\n",buffer);
	printf("\n");

	fclose(fp);

	}

void output2()
	{

	FILE *fp;
	char ch,buffer[N];

	fp=fopen("text.data","r");

	if(fp==NULL)
	 {
	 printf("File text.data isn\'t open.\n");
	 }

	printf("\n");
	while( (ch=fgetc(fp)) != EOF)
	printf("%c",ch);
	printf("\n");

	fclose(fp);

	}

void output3()
	{

	FILE *fp;
	char ch[N];

	fp=fopen("text.data","r");

	if(fp==NULL)
	 {
	 printf("File text.data isn\'t open.\n");
	 }

	printf("\n");
	fgets(ch,N,fp);
	printf("%s",ch);

	fgets(ch,N,fp);
	printf("%s",ch);
	printf("\n");

	fclose(fp);

	}
