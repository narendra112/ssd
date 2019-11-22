#include<stdio.h>
//#include<string.h>
#pragma pack(1)
struct abc
{
 int id;
 char name[10];
 };
 void Memcpy(void *a,void *b,int n)
 {

 char *s1=(char*)b;
 char *s2=(char*)a;
 for(int i=0;i<n;i++)
 {
   s2[i]=s1[i];
 }
 }
 int main()
 {
   struct abc s1={12,"chellu"};
   struct abc s2;
   Memcpy(&s2,&s1,sizeof(s1));
   printf("%d   %s",s2.id,s2.name);
   }
