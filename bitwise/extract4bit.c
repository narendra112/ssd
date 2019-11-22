//extract 4 bit
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
	unsigned int num,p1,p2,p3,p4,k,b;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Entered number is :\n");
	binary(num);
	printf("\nEnter 4 position\n");
	scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
//	b=(((num >> p1 )&0x01) |((( num >> p2)&0x01)<<1)|((( num >>p3)&0x01)<<2)|(((num>>p4)&0x01)<<3));
	b=(num&((0x01<<p1)|(0x01<<p2)|(0x01<<p3)|(0x01<<p4)));
	printf("After extract 4 bit\n");
	binary(b);
	printf("\n");
}

