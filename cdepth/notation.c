//program to print the value of array elements using pointer and subscript notation 
#include<stdio.h>
void main()
{	
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		printf("Value of a[%d]=",i);
		printf("%d\t",a[i]);
		printf("%d\t",*(a+i));
		printf("%d\t",*(i+a));
		printf("%d\t",i[a]);
		printf("Address of arr[%d]=%p\n",i,&a[i]);
	}
}
