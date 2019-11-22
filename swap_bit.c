//swapping of 2 bits
#include<stdio.h>
void main()
{
	int a,d1,d2,pos1,pos2,k;
	printf("Enter any value\n");
	scanf("%d",&a);
	printf("Enter 2 positions\n");
	scanf("%d %d",&pos1,&pos2);
	d1=((a>>pos1)&1);
	d2=((a>>pos2)&1);
	if(d1==d2)
	{
	printf("Values are same\n");
	}
	else
	{
	k=(a^(1<<pos1|1<<pos2));
	printf("swapping of bit=%d",k);
	}
}
