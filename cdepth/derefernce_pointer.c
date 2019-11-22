//derefercencing a pointer to an array
#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int *p=a;
	int (*ptr)[5]=&a;
	printf("p=%p ptr=%p\n",p,ptr);
	printf("*p=%d ptr=%p\n",*p,*ptr);
	printf("sizeof(p)=%ld,sizeof(*p)=%ld\n",sizeof(p),sizeof(*p));
	printf("sizeof(ptr)=%ld,sizeof(*ptr)=%ld\n",sizeof(ptr),sizeof(*ptr));
}
