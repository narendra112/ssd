#include<stdio.h>
#define merge(a,b) a##b
int main()
{
printf("multiplication is %d\n",merge(42,13));
}

