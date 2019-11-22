#include<stdio.h>
#include<stdlib.h>
void fileread(FILE*p);
int main()
{
	FILE*f;
	char filepath[100];
	char append[1000];
	printf("Enter any path  to append\n");
	scanf("%s",filepath);
	f=fopen(filepath,"a");
	if(f==NULL)
		printf("Error\n");
	printf("Enter data to append\n");
	fflush(stdin);
	fgets(append,1000,stdin);
	fputs(append,f);
	f=freopen(filepath,"r",f);
	printf("File appendid successfully\n");
	fileread(f);
	fclose(f);
}
void fileread(FILE*p)
{
	char ch;
	do
	{
		ch=fgetc(p);
		putchar(ch);
	}while(ch!=EOF);
}
