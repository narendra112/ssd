#include<stdio.h>
void main()
{
	int i,j,k,count=0;
	for(i=0;i<10;i++)
	{
	for(j=0;j<10;j++)
	{
	for(k=0;k<10;k++)
	{
	if(k==8)
	count++;
	if(j==8)
	count++;
	if(i==8)
	count++;
	}
	}
	}
	printf("8 occurance=%d\n",count);
}
