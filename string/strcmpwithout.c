#include<stdio.h>
int main()
{
	char a[10],b[10],i,j=0;
	printf("Enter two strings\n");
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++);
	while(a[j]!='\0')
	{
	if(a[j]==b[j])
	j++;
	else
	{
	printf("strings are not equal\n");
	break;
	}
	}
	if(i==j)
	printf("strings are same\n");
}
