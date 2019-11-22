//count even and odd in array
#include<stdio.h>
void main()
{
	int a[10],i,even=0,odd=0;
	printf("Enter elements of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Even=%d\nOdd=%d\n",even,odd);
}	
