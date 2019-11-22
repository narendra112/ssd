#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE*p;
	char a;
	p=fopen("/home/narendra/Desktop/I2C.txt","r");
	if(p==NULL)
		printf("Error");
	printf("file opened & read successfully\n");
	do
	{
		a=fgetc(p);
		putchar(a);
	}while(a!=EOF);
	fclose(p);
}
