/*pattern
01010
01010
01010
01010
01010*/
#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
        for(j=1;j<=5;j++)
        {
        printf("%d",(j%2));
        }
        printf("\n");
        }
}

