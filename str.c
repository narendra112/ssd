#include<stdio.h>
//_attribute_((packed))
struct a
{
char a;
int b;
int d;
char e;
}__attribute__((packed));
void main()
{
struct a n;
printf("%ld\n",sizeof(n.a));
printf("%ld\n",sizeof(n.b));
printf("%ld\n",sizeof(struct a));
printf("%ld\n",sizeof(char));
printf("%ld\n",sizeof(int));
printf("%ld\n",sizeof(n.d));
printf("%ld\n",sizeof(n.e));
}
