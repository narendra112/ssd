//address print 
#include<stdio.h>
void main()
{
	int c=11,*p;
	p=&c;
	printf("address of a=%d\n",*p);
	printf("content of a=%p\n",*(&p));
	c=1;
	printf("address of a=%d\n",*p);
        printf("content of a=%p\n",*(&p));
	*p=134;
	printf("address of a=%d\n",*p);
        printf("content of a=%p\n",*(&p));
	*p=c;
	printf("address of a=%d\n",*p);
        printf("content of a=%p\n",*(&p));
}

