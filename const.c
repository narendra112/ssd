#include<stdio.h>
int main(void){
const int a = 10;
int *p,

p=&a;
*p=20;
//a=20;
printf("%d\n",a);
}
