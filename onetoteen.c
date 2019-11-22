#include<stdio.h>
int fun(int start,int stop)
{
	if(start>stop)
		return 0;
		printf("%d\t",start);
	fun(start+1,stop);
}
void main()
{
	int start=1,stop=100,m;
	fun(start,stop);
	//printf("natural numbers are=%d %d\n",start,stop);
}
