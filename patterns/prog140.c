/*12345
21234
32123
43212
54321*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=i;j>1;j--)
	{
	printf("%d",j);
	}
	for(j=1;j<=(5-i+1);j++)
	{
	printf("%d",j);
	}
	printf("\n");
	}
}

