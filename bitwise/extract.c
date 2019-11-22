#include<stdio.h>
void main()
{
	int num,pos,ex;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter a pos");
	scanf("%d",&pos);
	ex=((num>>pos)&0x01);
	printf("%d\n",ex);
}

