#include<stdio.h>
void memory (int a)
{
	int rem,i,data;
	printf("Enter data where to  align\n");
	scanf("%d",&data);
	if(data%a==0)
	{
		for(i=1;i<=10;i++)
		{
			printf("%d--%x\n",data,data);
			data+=a;
		}
	}
	else
	{
		rem=data%a;
		data=a-rem+data;
		for(i=1;i<=10;i++)
		{
			printf("%d--%x\n",data,data);
			data+=a;
		}
	}
}

