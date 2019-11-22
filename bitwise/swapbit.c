//swapping 2 bits
#include<stdio.h>
void binary(int num)
{
	for(int i=7;i>=0;i--)
	{
	((num>>i)&0x01)?printf("1"):printf("0");
	if(i%4==0)
	printf(" ");
	}
}
void main()
{
	int num,pos1,pos2,k,k2;
	printf("Enter a number\n");
	scanf("%d",&num);
	binary(num);
	printf("\n");
	printf("Enter 2  position\n");
	scanf("%d %d",&pos1,&pos2);
	k=(num^((0x01<<pos1|0x01<<pos2)));
	k2=k|(0x01<<pos1);
	binary(k2);
}
