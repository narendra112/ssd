//pointer-to-pointer
#include<stdio.h>
void main()
{
	int a=5;
	int *pa;
	int **ppa;
	pa=&a;
	ppa=&pa;
	printf("Value of a=%d\n",a);
	printf("Address of a=%p\n",&a);
	printf("value of pa=Address of a=%p\n",pa);
	printf("Value of *pa=Value of a=%d\n",*pa);
	printf("Address of pa=%p\n",&pa);
	printf("Value of ppa=address of pa=%p\n",ppa);
	printf("Value of *ppa=Value of pa=%p\n",*ppa);
	printf("Value of **ppa=Value of a=%d\n",**ppa);
	printf("address of ppa=%p\n",&ppa);
}
