#include<stdio.h>
void main()
{
	 int i,n,a[50],j,temp;
	printf("Enter array size");
	scanf("%d",& n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
			printf("After sorting");
			for(i=0;i<n;i++)
			{
				printf("%d\n", a[i]);
			}
}
