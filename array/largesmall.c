//find largest and smallest number
#include<stdio.h>
void main()
{
	int a[5],large,small,i;
	printf("Enter elements of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		large=small=a[0];
		if(a[i]<small)
			small=a[i];
		if(a[i]>large)
			large=a[i];
	}
	printf("Small=%d\nLarge=%d\n",small,large);
}
