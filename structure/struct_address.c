#include<stdio.h>
struct arr
{
	char name[20];
	int value;
	float mark;
};
void main()
{
	struct arr a,b;
	//a.name="Narendra";
	a.mark=93.22;
	a.value=20;
	//b.name="naren";
	b.value=10;
	a.mark=34.222;
	printf("%p\n%p\n%p\n%p\n",&a.mark,&a.value,&b.mark,&b.value);
}
