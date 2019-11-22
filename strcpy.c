#include<stdio.h>
void main()
{
		char a[100],b[100],i;
	printf("Enter a string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("b=%s\n",b);
}
