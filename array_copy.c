#include<stdio.h>
void main()
{
	int a[5]={1,2,3},b[5]={0,0,0},i;
	printf("befor copy:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("after copy:\n");
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
		printf("%d\t",b[i]);
	}
	
	for(i=0;i<5;i++)
	{
}
