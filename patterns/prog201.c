#include<stdio.h>
#include<unistd.h>
/*void
advance_spinner() {
    static char bars[] = { '/', '-', '\\', '|' };
    static int nbars = sizeof(bars) / sizeof(char);
    static int pos = 0;

    printf("%c\r", bars[pos]);
    fflush(stdout);
    pos = (pos + 1) % nbars;
}*/

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
	}
//unsleep(2);
	for(i=4;i>=1;i--)
	{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
	}
}
