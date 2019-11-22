#include<stdio.h>
void main()
{
	unsigned int a,a1,a2,i;
	printf("Enter any number\n");
	scanf("%d",&a);
	printf("enter any bit which is set\n");
	scanf("%d%d",&a1,&a2);
	for(i=a1;i<=a2;i++)
	{
		if(((a>>i)&0x01))
		{
			printf("%d bit is set\n",i);
		}
		else
		{
			printf("%d bit is not set\n",i);
		}
	}
}
