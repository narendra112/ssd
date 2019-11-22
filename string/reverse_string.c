#include<stdio.h>
void main()
{
	int i,j,count=0,temp;
	char a[30];
	printf("Enter any string\n");
	scanf("%[^\n]s",a);
	for(i=0;a[i];i++)
	{
	count++;
	}
	for(i=0,j=count-1;i<j;i++,j--)
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	
		printf("%s",a);
}
