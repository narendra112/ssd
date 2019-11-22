//write c prigram to take marks of 3 subjects
#include<stdio.h>
void marks(int sub1,int sub2,int sub3);
void main()
{
int sub1,sub2,sub3;
printf("Enter marks of 3 subject\n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
marks(sub1,sub2,sub3);
}
void marks(int sub1,int sub2,int sub3)
{
float average;
average=(sub1+sub2+sub3)/3;
printf("Average=%f\n",average);
}
