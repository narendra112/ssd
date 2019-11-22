//finding odd & even in given array using function
#include<stdio.h>
void func(int num);
void main()
{
	int a[10],i;
	printf("Enter array elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		func(a[i]);
	}
}
void func(int num)
{
	if(num%2==0)
		printf("Even=%d\n",num);
	else
		printf("Odd=%d\n",num);
}
