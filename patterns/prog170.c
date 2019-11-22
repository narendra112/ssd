#include<stdio.h>
void main()
{
	int i,j,value=1,colcount=1;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=colcount;j++)
	{
	if(value==10)
	{
	value=1;
	printf("%d",value);
	}
	value++;
	colcount*=2;
	printf("\n");
	}
}
}
