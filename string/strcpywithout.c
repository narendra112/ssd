#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i;
	printf("Enter string1\n");
	scanf("%s",str1);
	printf("Enter string2\n");
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("After copy string1 to string2=%s\n",str2);
}
