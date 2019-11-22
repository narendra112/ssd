//swapping 2 nibble
#include<stdio.h>
void binary(int num)
{
	for(int i=31;i>=0;i--)
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
	scanf("%d",&num);
	binary(num);
	printf("\n");
	k=(((num&0x0000ffff)<<16)|((num&0xffff0000)>>16));
	printf("%d\n",k);
	binary(k);
}

