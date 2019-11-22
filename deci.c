/*P8.6 Program to convert a decimal number to binary number*/

#include<stdio.h>
void binary (int num);
int main(void)
{
	int num;
	printf("Enter a decimal number : ");
	scanf("%d",&num);
	binary(num);
}
void binary(int num)
{
	int i=0,j,arr[15];
	while(num>0)
	{
		arr[i] = num%2;	/*store the remainder in array*/
		num/=2;
		i++;
	}
	printf("Binary number is : ");
	for(j=i-1; j>=0; j--)     /*print the array backwards*/
		printf("%d",arr[j]);
	printf("\n");
}
