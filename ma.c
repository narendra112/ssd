#include<stdio.h>
int max (int x,int y)
{
	int z;
	z=(x>=y)?x:y;
	return z;
}
void main()
{
	int a,b,c,d;
	printf("Enter value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b);
	printf("max=%d\n",max(c,d));
}
