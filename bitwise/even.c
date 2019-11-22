#include<stdio.h>
void main()
{
	int num,count=1,i;
	printf("enter first n even numbers\n");
	scanf("%d",&num);
	for(i=1;count<=num;i++)
	{
		if(i%2==0)
		{
			count++;
		
		printf("%d\t",i);
		}
	}
}

