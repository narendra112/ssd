#include<stdio.h>
#include"array_function.h"
//void check(int num);
void main(void)
{
	int a[10],i;
	printf("enter any number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		check(a[i]);
	}
}
/*void check(int num)
{
	if(num%2==0)
		printf("%d is even\n",num);
	else
		printf("%d is odd\n",num);
}*/

