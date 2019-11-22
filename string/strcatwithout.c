#include<stdio.h>
void main()
{
	char a[10],b[10],i,j=0;
	printf("Enter two strings\n");
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++);
	while(b[j]!='\0')
	{
	a[i]=b[j];
	i++;
	j++;
	}
	a[i]='\0';
	printf("%s",a);
}
