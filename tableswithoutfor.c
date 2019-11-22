/*#include<stdio.h>
int func(int num,int i)
{
if(num>i)
return 0;
printf("%d",func(num+1,i));
}
void main()
{
int num,i;
printf("Enter any number which tables you required\n");
scanf("%d",&num);
func(num,i);
}*/


//Write two recursive functions, one to recurse over the value of x and other to recurse over the values of y.

#include <stdio.h>

void mult_table_y(int x, int y)
{
   if ( y != 1 )
   {
      mult_table_y(x, y-1);
   }
   printf("%d ", x*y);
}

void mult_table(int x, int y)
{
   if ( x != 1 )
   {
      mult_table(x-1, y);
   }
   mult_table_y(x, y);
   printf("\n");
}

int main()
{
   mult_table(5, 5);
}


