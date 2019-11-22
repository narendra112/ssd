#include<stdio.h>
struct a
{
	int no;
	float roll;
	float per;
};
void main()
{
int x;
	struct a w={111,11.0,12.0},n={1,1.0,2.};
	struct a z;
	z=w;
	x=((w.no==z.no) && (w.per==w.per))?1:0;
	if(x==1)
	{
		printf("w and z are equal\n ");
		printf("%d %f %f",w.no,w.roll,w.per);
	}
		else
	{
			printf("w and z are not equal\n");
	}
}
