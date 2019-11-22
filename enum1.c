#include<stdio.h>
void main()
{
int today;
	enum today{sunday,monday,tuesday,thursaday,friday,saturday};
	today=monday;
	if(today==sunday)
	printf("Holiday\n");
	else if(today==saturday)
	printf("Half Day\n");
	else
	printf("Full Day\n");
}
