//find binary number using array
#include<stdio.h>
void main()
{
	int i,a[10],j,num;
	printf("Enter any decimal number\n");
	scanf("%d",&num);
	for(i=0;num>0;i++)
	{
	a[i]=num%2;
	num/=2;
	}
	printf("Binary number=");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
}
