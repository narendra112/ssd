//add elements of array
#include<stdio.h>
void main()
{
	int a[10],i,sum=0;
	printf("Enter values of arrays\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of array=%d\n",sum);
}
