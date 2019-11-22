#include<stdio.h>
void main()
{
	int a[100],i,search;
	printf("enter 5 values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search\n");
	scanf("%d",&search);
	for(i=0;i<5;i++)
	{
		if(a[i]==search)
		{
			printf("%d is present at location\n",search);
			break;
		}
		else
		{
			printf("%d is not present at location\n",search);
			break;
		}
	}
}
