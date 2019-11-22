#include<stdio.h>
void main()
{
	int a[5]={32,33,11,13,12};
	int i;
	for(i=0;i<5;i++)
	{
	printf("value of %d =%d\t",i,*a+i);
	printf("address of %d =%p\n",i,a+i);
	}
}
