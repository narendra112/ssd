#include<stdio.h>
void main()
{
	int i,n,f1=0,f2=1,f3,count;
	printf("Enter any number : ");
	scanf("%d",&n);
	f3=f1+f2;
	printf("%d  %d	%d  ",f1,f2,f3);
	for(i=2;f3<n;)
	{
	f1=f2;
	f2=f3;
	f3=f1+f2;
	count++;
	printf("%d\t",f3);
	if((n-3)==count)
	break;
//	printf("%d  ",f3);
	}
}
