//to check bit is set or not 
#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("Enter position\n");
	scanf("%d",&pos);
	if(num&(0x01<<pos))
	printf("Set\n");
	else
	printf("Not set\n");
}
