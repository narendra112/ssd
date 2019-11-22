//program to print value & address  of array elements by subscripting a pointer variable
#include <stdio.h>
void main()
{
	int a[5]={1,2,3,4,5},*p,i;
	p=a;
	for(i=0;i<5;i++)
	{
		printf("Address of pointer[%d]=%p %p %p %p %p %p\n",i,&a[i],(a+i),(i+a),p+i,&p[i]);
		printf("Value of pointer[%d]=%d %d %d %d %d %d\n",i,a[i],*(a+i),*(i+a),*(p+i),p[i]);
	}
}
