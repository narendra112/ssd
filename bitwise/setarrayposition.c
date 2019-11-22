#include<stdio.h>
void main()
{
	int d[32],pos;
	unsigned int i,a,s;
	printf("Enter any number:\n");
	scanf("%d",&a);
	printf("Enter how many positions you want to set:\n");
	scanf("%d",&pos);
	printf("Enter positions:\n");
	for(i=0;i<pos;i++)
	{
		scanf("%d",&d[i]);
		}

//unsigned int i,a,s;
for(i=0;i<pos;i++)
{
//if(i==d[i])
a=a|(0x01<<d[i]);
}
//for(i=0;i<pos;i++)
printf("after setting bit=%d\n",a);
}
