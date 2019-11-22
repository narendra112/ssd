//program for copy 2 arrays using strcpy
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[20];
	printf("Enter a string\n");
	scanf("%s",b);
	strcpy(a,b);
	printf("string Entered in a=%s and b=%s\n",a,b);
	strcpy(a,"Bang");
	strcpy(b,"Mang");
	printf("string is %s %s\n",a,b);
}
