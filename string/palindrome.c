/*program for reverse a string
#include<stdio.h>
#include<string.h>
int main(void)
{
int i,len,j=0;
char str[100],b[100],c[100];
printf("Enter string\n");
scanf("%s",str);
//	b=str;
len=strlen(str);
for(i=len;i>=0;i--)
{
c[j]=str[i];
j++;
}
if(str[100]==c[100])
printf("Given strings are palindrome\n");
else
printf("Given strings are not palindrome\n");
}*/

/*#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
int i=0,j;
printf("Enter a string:\n");
gets(str);
j=strlen(str)-1;
while(i<j)
{
if(str[i]==str[j])
{
i++;
j--;
}
else
{
printf("The given string is not palindrom\n");
break;
}
}
if(i>=j)
{
printf("The given string is palindrom\n");
}
}*/

#include<stdio.h>
void main()
{
	char a[20];
	int i,j,count=0,count1=0;
	printf("Enter any string\n");
	gets(a);
	for(i=0;a[i];i++)
	{
		count++;
	}
	for(i=0,j=count-1;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			count1++;
		}
	}
	if(count1)
	{
		printf("Not palindrome\n");
		}
	else
	{
		printf("Palindrome\n");
		}
}
