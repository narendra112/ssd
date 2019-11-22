#include<stdio.h>
void main()
{
	int num,set,pos;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter position\n");
	scanf("%d",&pos);
	set=num|(0x01<<pos);
	printf("%d\n",set);
}
