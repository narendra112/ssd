//swapping 2 byte
#include<stdio.h>
void binary(int num)
{
	for(int i=15;i>=0;i--)
	{
		((num>>i)&0x01)?printf("1"):printf("0");
		if(num%8==0)
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
	k=(((num&0x00ff)<<8)|((num&0xff00)>>8));
	printf("%d\n",k);
	binary(k);
}

