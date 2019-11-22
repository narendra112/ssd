#include<stdio.h>
void main()
{
	int p,e,t,s,n,i;
	printf("Enter any num\n");
	scanf("%d",&n);
	printf("Enter position\n");
	scanf("%d",&p);
/*	e=((n>>p)&0x01);
	if(e==1)
	{
	printf("%d\n",n);
	}
	else
	{
	t=(n^(0x01<<p));
	printf("toggle bit=%d\n",t);
	}*/
	//for(i=0;i<=3;i++)
	//{
	e=(n^(0x01<<p));
	//}
	printf("%d\n",e);
	
}

