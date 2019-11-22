#include<stdio.h>
void main()
{
	int passmark;
//	char sub[30];
//	printf("Enter any sub\n");
//	scanf("%s",sub);
	enum s{physics,maths,chemistry,english,hindi,kan};
	switch(s)
	{
		case hindi:
		case english:
			passmark=25;
			break;
		case physics:
			passmark=45;
			break;
		case chemistry:
			passmark=35;
			break;
		default:
			passmark=33;
	}
}
