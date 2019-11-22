#include<stdio.h>
void main()
{
	int temp,size,i,j,a[10],n,min;
	printf("enter array index value\n");
	printf("before swapping\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("after sorting\n");
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
}
