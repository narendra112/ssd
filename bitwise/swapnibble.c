//swapping 2 nibble
#include<stdio.h>
void binary(int num)
{
	for(int i=7;i>=0;i--)
	{
	((num>>i)&0x01)?printf("1"):printf("0");
	if(num%4==0)
	printf(" ");
	}
}
int main()
{
	int num,k;
	printf("Enter any number\n");
	scanf("%x",&num);
	binary(num);
	printf("\n");
	k=(((num&0x0f)<<4)|((num&0xf0)>>4));
	printf("%d\n",k);
	binary(k);
}
