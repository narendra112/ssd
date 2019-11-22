#include<stdio.h>
void main()
{
	int i,j,value,count;
	for(i=1;i<=5;i++)
	{
	value=(i & 1)?(count+1):(count+i);
	for(j=1;j<=i;j++)
	{
	printf("%-3d",value);
	if(i & 1)
	{
	value++;
	}
	else
	{
	value--;
	}
	count++;
	}
	
	printf("\n");
	}
}
