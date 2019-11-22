/************* double pointer ********************/
void main()
{
	int *p1,**p2,a=10;
	p1=&a;
	p2=&p1;
	printf("%d\n",a);
	printf("%d\n",*p1);
	printf("%d\n",**p2);
}

