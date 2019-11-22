//function returning pointer
#include<stdio.h>
int *fun(int *p,int n);
void main()
{
	int n=5,a[10]={1,2,3,4,5,6,7,8,8,1};
	int *ptr;
	ptr=fun(a,n);
	printf("value of a=%p value of ptr=%p value of *ptr=%d\n",a,ptr,*ptr);
}
int *fun(int *p,int n)
{
	p=p+n;
	return p;
}

