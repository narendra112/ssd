//sum of square using function
#include<stdio.h>
int sum(int va[],int *sum);
void main()
{
	int a[6]={1,2,3,4,5,6},i,su;
	sum(a,&su);
	printf("Contents of array are\n");
	for(i=0;i<6;i++)
	printf("%d\t",a[i]);
	printf("%d\n",su);
}
int sum(int va[],int *su)
{
	int i;
	for(i=0;i<6;i++)
	{
		va[i]=va[i]*va[i];
		*su+=va[i];
	}
	return *su;
//	printf("sum of square of array=%d\n",sum);
}	
