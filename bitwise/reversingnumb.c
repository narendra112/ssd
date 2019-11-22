//aabbccdd reverse ddccbbaa
#include<stdio.h>
void main()
{
int num=0x01020304,s;
s=(((0x000000ff&num)<<24)|((0x0000ff00&num)<<8)|((0x00ff0000&num)>>8)|((0xff000000&num)>>24));
printf("%x\n",s);
}
