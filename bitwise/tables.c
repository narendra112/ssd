/*#include<stdio.h>
  void main()
  {
  int num;
  printf("Enter which table do u need to print\n");
  scanf("%d",&num);
  for(i=1;i<=10;i++)
  {
  if */
#include<stdio.h>
int add(int x, int y)
{
	while (y != 0)
	{
		int carry = x & y;
		x = x ^ y; 
		y = carry << 1;
	}
	return x;
}
int subtract(int x, int y)
{
	while (y != 0)
	{
		int borrow = (~x) & y;
		x = x ^ y;
		y = borrow << 1;
	}
	return x;
}
int product(int a, int b)
{
	if (a < b)
	{
		return product(b, a);
	}
	else if (b != 0)
	{
		return (add(a,product(a, subtract(b, 1) )) );
	}
	else
	{
		return 0;
	}
}
void main() {
	int n, i;
	printf("Enter number: ") ;
	scanf("%d", &n);
	for(i=1 ; i<=10 ; i=add(i, 1)){
		printf("%d x %d = %d\n", n, i, product(n, i)) ;
	}
}
