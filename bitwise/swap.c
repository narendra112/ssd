//swapping 2 nibble
#include<stdio.h>
/*void binary(int num)
{
	for(int i=31;i>=0;i--)
	{
		((num>>i)&0x01)?printf("1"):printf("0");
		if(num%4==0)
			printf(" ");
	}
}*/
int main()
{
	int num=2864434397,k;
//	printf("Enter any number\n");
//	scanf("%x",&num);
//	binary(num);
	printf("\n");
	k=(((num&0x000000ff)<<24)|((num&0x0000ff00)<<8)|((num&0x00ff0000)>>8)|((num&0xff000000)>>24));
	printf("%x\n",k);
	//binary(k);
}

