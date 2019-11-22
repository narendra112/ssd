#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,len;
	char name[50];
	printf("enter any name\n");
	scanf("%s",name);
	len=strlen(name);
	for(i=5/2;i<=5;i+=2)
	{
	for(j=1;j<=5-i;j+=2)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	for(j=1;j<=5-i;j++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
	}
	for(i=5;i>=1;i--)
	{
	for(j=5;j>=i;j--)
	{
	printf(" ");
	}
	if(i==5)
	{
	for(j=1;j<=(5*2-len)/2;j++)
	{
	printf("*");
	}
	printf("%s",name);
	for(j=1;j<(5*2-len)/2;j++)
	{
	printf("*");
	}
	}
	else
	for(j=1;j<=2*i-1;j++)
	{
	printf("*");
	}
	printf("\n");
	}
}

