#include<stdio.h>
int func(int x,int y);
void main(void)
{
	int a=10,b=20,k;
	k=func(a,b);
	printf("a=%d;b=%d\n",k,k);
}



int func(int x,int y)
{
	x++;
	y++;
	printf("x=%d,y=%d\n",x,y);
	return x;
	//return y;
}
