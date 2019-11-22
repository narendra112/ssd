#include<stdio.h>
void main()
{
	int a[100],i,search,count=0;
	printf("enter array element\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter any number to search\n");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(a[i]==search)
		{
			printf("%d is present in location\n",search);
	break;
		}
else
printf("%d is not present in location\n",search);
break;
	}

}

