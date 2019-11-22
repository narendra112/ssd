#include<stdio.h>
void main()
{
	int door_no[40],pin_code[40];
	char area[40],state[40],city[40],name[40],a;
	puts("enter door no");
	gets(door_no);
	printf("enter your name\n");
	scanf("%s",name);
	puts("enter your area");
	a=getchar(area);
	puts(a);
	puts("enter your city");
	gets(city);
	puts("enter your state");
	gets(state);
	puts("permanent address");
	puts(door_no);
	puts(name);
	puts(area);
	putchar(city);
	puts(state);

	//putchar("enter your area");
	//getchar("%s",area);
}
