#include<stdio.h>
void main()
{
   char str[100];
   int countStr=0;
   printf("Enter binary number");
   gets(str);
   printf("%s",str[0]);
   printf("%s",str[strlen(str)-1]);

}
