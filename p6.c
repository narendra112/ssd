#include<stdio.h>
struct student
{
int no;
char name[50];
};
void main()
{
struct student s;
s.no=12;
printf("%d",s.no);
}
