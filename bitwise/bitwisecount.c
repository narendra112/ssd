#include<stdio.h>
void main()
{
	int i,one=0,zero=0,a;
	printf("enter the value of a \n");
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{
		if((a>>i)&0x01)
		one++;
		else
		zero++;
	}
	printf("count of zero=%d\ncount of one=%d\n",zero,one);
}
