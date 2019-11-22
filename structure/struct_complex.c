//Example: Add Two Complex Numbers
#include<stdio.h>
//comple add(int,int);
typedef struct compl
{
	float real;
	float img;
}comple;
comple add(comple n1,comple n2);
void main()
{
	comple n1,n2,temp;
	printf("Enter value of n1 real & imaginary\n");
	scanf("%f %f",&n1.real,&n1.img);
	printf("Enter value of n2 real & imaginary\n");
	scanf("%f%f",&n2.real,&n2.img);
	temp=add(n1,n2);
	printf("Sum=%f+i%f",temp.real,temp.img);
}
comple add(comple n1,comple n2)
{
	comple temp;
	temp.real=n1.real+n2.real;
	temp.img=n1.img+n2.img;
	return (temp);
}

