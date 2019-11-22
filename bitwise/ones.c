#include<stdio.h>
void main()
{
	int num,i=0,one=0;
	printf("enter number\n");
	scanf("%d",&num);
	while(num)
	{
	if((num>>i)&0x01)
	{
	one++;
	num=num&(~(0x01<<i));
	}
	i++;
	}
	printf("%d\n",one);
}
