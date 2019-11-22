//setting a bit in 3 positions
#include<stdio.h>
void binary(int num)
{
	for(int i=7;i>=0;i--)
	{
		((num>>i)&0x01)?printf("1"):printf("0");
//		if(i%4==0)
//			printf(" ");
	}
}
void main()
{
	int num,p1,p2,p3,s;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Input=");
	binary(num);
	printf("\nEnter 3 position\n");
	scanf("%d %d %d",&p1,&p2,&p3);
	s=(num|((0x01<<p1)|(0x01<<p2)|(0x01<<p3)));
	printf("%d\n",s);
	binary(s);
}
