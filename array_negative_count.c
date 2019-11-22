#include<stdio.h>
void main()
{
	int a[10],i,neg,count=0;
	printf("enter any 10 values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
printf("negative value count=%d\n",count);
}

