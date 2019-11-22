#include<stdio.h>
void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},first,second,third,i;
	first=a[0];
	second=a[0];
	for(i=0;i<10;i++)
	{
	if(first<a[i])
	{
	third=second;
	second=first;
	first=a[i];
	}
	else if(second<a[i])
	{
	third=second;
	second=a[i];
	}
	}
	printf("Third Largest=%d\n",third);
}
