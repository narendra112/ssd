//Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int sum(int start,int end);
void main()
{
	int su,start,end;
	printf("Enter start & stop to find natural numbers\n");
	scanf("%d %d",&start,&end);
	su=sum(start,end);
	printf("Sum=%d",su);
}

int sum (int start,int end)
{

	int su;
	if(start==end)
		return start;
	else

	return start+sum(start+1,end);
	//printf("%d%d%d",su,end,start);
}
