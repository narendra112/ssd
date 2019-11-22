#include<stdio.h>
void main()
{
	int k,i,j;
	for(i=1;i<=5;i++)
	{
	k=i*2-1;
	for(j=i;j<=5;j++)
	{
	printf("%d",k);
	k+=2;
	}
	printf("\n");
	}
}

