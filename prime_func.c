#include<stdio.h>
void prime(int n);
void main()
{
	int n;
	printf("enter any value\n");
	scanf("%d",&n);
	prime(n);
}
/*void prime(int n)
{
	int i,flag=1;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag==0;
			break;
		}
	}
	if(flag==1)
		printf("prime\n");
	else
		printf("not a prime\n");
}*/
