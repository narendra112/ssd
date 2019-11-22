#include<stdio.h>
void binary(int num)
{
for(int i=7;i>=0;i--)
((num>>i)&0x01)?printf("1"):printf("0");
}
void main()
{
	int num,k,p1,p2,k1,k2;
	printf("Enter any  number\n");
	scanf("%x",&num);
	binary(num);
	printf("\n");
	printf("Enter two positions\n");
	scanf("%d%d",&p1,&p2);
	k=(num&(~(0x01<<p2)));
	k1=(num|(0x01<<p1));
	k2=k|k1;
	//printf("result=%d\n",k);
	binary(k2);
}
/*void main()
{
unsigned int res,res1,num=0x60;
res=(num&(~(0x01<<6)));
res1=(res|(0x01<<0));
printf("%x",res1);
}*/
