#include<stdio.h>
void main()
{
	int k,i,j;
	for(i=5;i>=1;i--)
	{
	k=i;
	for(j=i;j>=1;j--)
	{
	printf("%d",k);
	k++;
	}
	printf("\n");
	}
}

