#include<stdio.h>
void main()
{
	int a[5],key,flag=0;
	int low=0,high=4,mid,i;
	printf("enter array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("enter search key\n");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(flag==1)
		printf("key is found at %d location\n",mid+1);
	else
		printf("key not found\n");
}

