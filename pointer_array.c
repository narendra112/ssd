//passing array to function
#include<stdio.h>
void array(int a[]);
void main()
{
	int a[5]={1,2,3,4,5};
	array(a);
}
void array(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}

