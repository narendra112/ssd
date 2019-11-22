//input and output of string using printf & scanf
#include<stdio.h>
void main()
{
	char a[20]="Narendra";
	printf("Entered string is=%s\n",a);
	printf("Enter new string\n");
	scanf("%s",a);
	printf("new string is=%s\n",a);
}
