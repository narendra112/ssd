#include<stdio.h>
int str_cmp(char str1[],char str2[])
{

	int i;
	for(i=0;str1[i]==str2[i];i++)
	{
	   if(str1[i]=='\0')
		return 0;
	}
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
		return (str1[i]-str2[i]);
}
void main(void)
{
	char str1[100],str2[100];
	int flag;
	printf("Enter string1\n");
	scanf("%s",str1);
	printf("Enter string2\n");
	scanf("%s",str2);
	flag=str_cmp(str1,str2);
	if(flag==0)
	printf("String1 is equal to string 2\n");
	else if(flag<0)
	printf("String2 is greater\n");
	else
	printf("String1 is greater\n");
}
