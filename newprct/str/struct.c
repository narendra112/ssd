#include<stdio.h>
struct r
{
int y;
int u;
int v;
};
void main()
{
struct r j,d={1,2,3};
j=d;
printf("%d\n",j.v);
if(j.v>d.y)
printf("same\n");
}
