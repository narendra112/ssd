#include<stdio.h>
void main()
{
	int a[20],i;
	printf("Enter elements in array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negative numbers in array are\n");
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
}
