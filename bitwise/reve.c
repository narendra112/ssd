//reverse a bit
#include <stdio.h>
void binary(int num)
{
	for(int i=3;i>=0;i--)
	{
		((num>>i)&1)?printf("1"):printf("0");
		if(i%4==0)
		printf(" ");
}
}
void main()
{
	int i,num,d;
	printf("Enter any number\n");
	scanf("%x",&num);
	binary(num);
	printf("\n");
	for(i=3;i>=0;i--)
	{
		d=(num&(0x01<<3-i))?1:0;
		printf("%d\n",d);
	}
		printf("After revising=");
		binary(d);
		printf("\n");
}
