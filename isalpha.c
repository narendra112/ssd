#include<stdio.h>
void main()
{
char character;
puts("press any key\n");
character=getchar();
if(isalpha(alphabet)>0)
printf("the character is letter\n");
else if(isdigit(alphabet)>0)
printf("the character is digit\n");
else
printf("character is not alphanumeric\n");
}
