/*#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	printf("Enter any string\n");
	gets(a);
	strrev(a);
	printf("Reverse of string=%s\n",a);
}
*/
#include<stdio.h>
 
int string_length(char*);
void reverse(char*);
 
void main()
{
   char s[100];
 
   printf("Enter a string\n");
   gets(s);
 
   reverse(s);
 
   printf("Reverse of the string is \"%s\".\n", s);

}
 
