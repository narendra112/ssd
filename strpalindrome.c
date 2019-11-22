#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100],test[100];
int i,j=0,c=0;
printf("Enter string\n");
gets(a);
for(i=0;i<=a[i];i++)
{
   test[c]=a[i];
   c++;
}
for(i=strlen(a)-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
if(test==b)
printf("Palindrome\n");
else
printf("Not palindrome\n");
}


int str_Compare(char a[],char b[])
{
   int c=0;
   while(a[c]==b[c])
   {
      if(a[c]=='\0' || b[c]=='\0')
      break;
      c++;
   }

   if(a[c]=='\0' && b[c]=='\0')
   {
     return 0;
   }
   else
   {
     return -1;
   }
}
