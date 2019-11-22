#include<stdio.h>
int array(int *a);
void main()
{
	int a[5]={1,2,3,4,5};
	array(a);
}
int array(int *a)
{
	int i;
	for(i=0;i<5;i++)
	printf("%d\n",*(a+i));
}

