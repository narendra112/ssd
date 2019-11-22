//program to print elements of 2d array using subscripting a pointer
#include<stdio.h>
void main()
{
	int a[3][4]={{1,2,3,4},{6,7,8,9},{11,12,13,14}};
	int (*ptr)[4];
	ptr=a;
	printf("%p  %p  %p\n",ptr,ptr+1,ptr+2);
	printf("%p  %p  %p\n",*ptr,(*ptr+1),(*ptr+2));
	printf("%d  %d  %d\n",**ptr,(*(*ptr+1)+2),(*(*(ptr+2)+3)));
	printf("%d  %d  %d\n",ptr[0][0],ptr[1][2],ptr[2][3]);
}
