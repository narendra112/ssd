//concatenate using strcat 
#include<stdio.h>                                                 
#include<string.h>
void main()
{
	char a[30],b[30];
	printf("Enter two strings\n");
	gets(a);
	gets(b);
	strcat(a,b);
	printf("after concatenate=%s\n",a);
	strcat(a,"_Ban");
	printf("again concatenate=%s\n",a);
}
