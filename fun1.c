#include<stdio.h>
#include "func.h"
//int sum(int x,int y);
int main()
{
	int a=10,b=12,k;
	k=sum(a,b);
	printf("%-6d",k);
	k=sum(10,13);
	printf("%d\n",k);
	return 0;
}
/*int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}*/


