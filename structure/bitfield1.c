#include <stdio.h>
struct test {
unsigned int x;
unsigned int y[10] : 32;
const int z;
int a;
};
int main()
{
struct test d;
printf("%ld\n", sizeof(d.a));
return 0;
} 
