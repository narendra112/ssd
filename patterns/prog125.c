/*pattern
11111
00000
11111
00000
11111*/
#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
        for(j=1;j<=5;j++)
        {
        printf("%d",(i%2));
        }
        printf("\n");
        }
}

