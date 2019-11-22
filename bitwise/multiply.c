#include<stdio.h>
void main()
{
	int a,b,i,s=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		s=s+a;
	}
	printf("%d\n",s);
}
