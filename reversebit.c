#include<stdio.h>
void main()
{
	int a,i;
	printf("Enter value\n");
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{
		if(a&(0x01<<(7-i)))
			printf("1");
		else
			printf("0");
	}
}
