#include<stdio.h>
void bin(int num)
{
	int i;
	for (i=7;i>=0;i--)
		((num>>i)&0x01)?printf("1"):printf("0");
}
void main()
{
	unsigned int num,bit1,bit2,res,p1,p2,x;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Enter two positions\n");
	scanf("%d%d",&p1,&p2);
	bit1=((num>>p1)&0x01);
	bit2=((num>>p2)&0x01);
	res=bit1^bit2;
	res=((res<<p1)|(res<<p2));
	x=num^res;
	printf("After swapping positions =%d\n",x);
	bin(x);
}
