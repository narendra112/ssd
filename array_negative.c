#include<stdio.h>
void main()
{
	int a[10],i,neg;
	printf("enter any 10 values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
}

