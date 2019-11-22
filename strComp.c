#include<stdio.h>
#include<string.h>
void main()
{
   char str1[100],str2[100];
   printf("Enter first string\n");
   gets(str1);
   printf("Enter second string\n");
   gets(str2);
   if(str_Compare(str1,str2)==0)
   {
     printf("Equal\n");
   }
   else
   {
    printf("Not equal\n");
   }

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
