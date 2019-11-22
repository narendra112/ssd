//jump search
#include<stdio.h>
#include<math.h>
void main()
{
	int a[50],i,temp,j,n,sq,first,flag=0,key;
	printf("enter array value\n");
	scanf("%d",&n);
//entering array element
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	sq=sqrt(n);
	first=0;
printf("enter key element");
        scanf("%d",& key);

	while(a[sq]<key)
	{
		first=sq;
		sq=sq+sqrt(n);
	}
	while(a[first]<=key)
	{
		if(a[first]>=key)
		{
			flag=1;
			break;
		}
		first=first+1;
	}
	if(flag==1)
		printf("key is there\n");
	else
		printf("key not there\n");
}
