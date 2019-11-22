//set a bit ,clear,toggle,extract
#include<stdio.h>
void binary(int res)
{
  for(int i=31;i>=0;i--)
  {
    ((res>>i)&0x01)?printf("1"):printf("0");
    if(i%8==0)
      printf(" ");
}
}
void main(void)
{
	int num,s,c,t,e,pos;
	printf("Enter any number to perform bitwise operation\n");
	scanf("%d",&num);
	printf("Enter which position to perform operation\n");
	scanf("%d",&pos);
	s=(num|(0x01<<pos));
	c=(num&(~(0x01<<pos)));
	t=(num^(0x01<<pos));
	e=((num>>pos)&0x01);
	printf("After setting a bit=%d\n",s);
	printf("After clearing a bit=%d\n",c);
	printf("After toggling a bit=%d\n",t);
	printf("Extracting a bit=%d\n",e);
	printf("\n");
	binary(s);
	printf("\n");
	binary(c);
	printf("\n");
	binary(t);
	printf("\n");
	binary(e);
	printf("\n");
	
}
