//input values and display them 
#include<stdio.h>
void main()
{
	int a[6],i;
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered values are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}

