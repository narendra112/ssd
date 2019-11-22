//reverse a bit 
#include <stdio.h>
void main()
{
	int a,i,k,rev,one=0,zero=0;
	printf("Enter any number\n");
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{
		if((a>>i)&1)
		{
		printf("1\t");
		one++;
		}
		else
		{
		printf("0\t");
		zero++;
		}
	}
	printf("one=%d\t",one);
	printf("zero=%d\t",zero);
}
