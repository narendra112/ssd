#include<stdio.h>
void main()
{
char ch;
puts("enter any value\n");
ch=getchar();
if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o' ||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("Vowel\n");
else
printf("consonant\n");
}
