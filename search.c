#include<stdio.h>
void main()
{
	int a[100],n,i,key,flag=0;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key to search\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	{
		flag=1;
		break;
	}
	}
	if(flag==1)
	printf("%d is found\n",key);
	else
	printf("%d not found\n",key);
}
