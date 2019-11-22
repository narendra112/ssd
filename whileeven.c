#include<stdio.h>
void main()
{
	int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n>0)
	{
	if(((n/2)*2)==n)
		{
			printf("Even\n");
			break;
		}
		else
		{
			printf("Odd\n");
			break;
		}
	}
}
