#include<stdio.h>
void main()
{
	int n,i=1,count=0;
	printf("Enter n even number to print\n");
	scanf("%d",&n);
	printf("Even numbers are:");
/*	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	printf("%d\t",i);
	}*/
	while(i!=0)
	{
		if(i%2==0)
		{
			count++;
			printf("%d\t",i);
		}
		if(count==n)
		{
			break;
		}
		i++;
		}
}
