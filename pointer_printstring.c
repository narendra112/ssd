///*C program to print a string using pointer.*/
#include<stdio.h>
void main()
{
	char b[100];
	char *p;
	printf("Enter any string\n");
	gets(b);
	p=b;
	while(*b!='\0');
	printf("%c",*p++);
}
