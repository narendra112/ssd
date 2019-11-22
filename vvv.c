#include<stdio.h>
void main()
{
char ch;
printf("enter any value\n");
ch=getchar();
if(ch=='a'||'A' || ch=='e'||'E'|| ch=='i'||'I'|| ch=='o'||'O' |ch=='u'||'U')
printf("Vowel\n");
else
printf("consonant\n");
}

