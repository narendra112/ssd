#include<stdio.h>
void main()
{
int num,res;
printf("Enter number\n");
scanf("%x",&num);
res=(((num&0x0000000f)<<28)|((num&0x000000f0)<<20)|((num&0xff000000)>>8)|((num&0x0000ff00))|((num&0x00ff0000)>>8));
printf("%x\n",res);
}
