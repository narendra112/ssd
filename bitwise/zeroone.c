//counting number of zero and one in bit
#include<stdio.h>
void binary(int num)
{
	for(int i=31;i>=0;i--)
	{
	((num>>i)&0x01)?printf("1"):printf("0");
	}
}
void main(void)
{
	int one=0,zero=0,num,i;
	printf("Enter any number\n");
	scanf("%d",&num);
	binary(num);
	for(i=31;i>=0;i--)
	{
	if((num>>i)&0x01)
	one++;
	else 
	zero++;
	}
	printf("\nones=%d zeroes=%d\n",one,zero);
}
