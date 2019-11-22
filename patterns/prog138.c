#include <stdio.h>
void main()
{
    int rows, cols, i, j;

    for(i=1; i<=5; i++)
    {
            for(j=i; j<=5; j++)
        {
            printf("%d", j);
        }

        for(j=1; j<i; j++)
        {
            printf("5");
        }

        printf("\n");
    }
}

