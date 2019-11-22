#include<stdio.h>
void main()
{.,  
	char a[20];
	int i,j,count=0,count1=0;
	printf("Enter any string\n");
	scanf("%[^\n]s",a);
	for(i=0;a[i];i++)
	{
		count++;
	}
	for(i=0,j<count-1;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			count1++;
		}
	}
	if(count1)
		printf("Not palindrome\n");
	else
		printf("Palindrome\n");
}

