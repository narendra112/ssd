#include <stdio.h>
int main()
{
	int num;

	/* Input number from user */
	printf("Enter any number:\n");
	scanf("%d", &num);

	if((num & 0x01)==0)
	{
		printf("%d is even\n", num);
	}
	else
	{
		printf("%d is odd\n", num);
	}

	return 0;
}
