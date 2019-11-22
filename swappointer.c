//swap using pointer 
#include<stdio.h>
void main()
{
	int x,y,temp;
	int *ptr,*qtr;
	ptr=&x;
	qtr=&y;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&x,&y);
	printf("Before swapping x=%d y=%d\n",x,y);
	*ptr=*ptr^*qtr;
	*qtr=*ptr^*qtr;
	*ptr=*ptr^*qtr;
	printf("After swapping x=%d y=%d\n",*ptr,*qtr);
}
