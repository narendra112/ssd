#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n,len;
	char name[50];
	len=strlen(name);
	for(i=5/2;i<=5;i+=2)
	{
		for(j=1;j<=5-i;i+=2)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=5-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}


