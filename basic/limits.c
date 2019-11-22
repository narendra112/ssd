#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
	printf("int=%ld\n",sizeof(int));
	printf("char=%ld\n",sizeof(char));
	//printf("Bool=%ld\n",sizeof(bool));
	printf("void=%ld\n",sizeof(void));
	printf("double=%ld\n",sizeof(double));
	printf("float=%ld\n",sizeof(float));
	printf("signed int min=%d\n",INT_MIN);
	printf("signed int max=%d\n",INT_MAX);
	printf("unsigned int =%u\n",UINT_MAX);
	printf("signed char max=%d\n",SCHAR_MIN);
	printf("signed char max=%d\n",SCHAR_MAX);
	printf("unsigned char=%d\n",UCHAR_MAX);
	printf("short min=%d\n",SHRT_MIN);
	printf("short max=%d\n",SHRT_MAX);
	printf("unsigned short=%d\n",USHRT_MAX);
	printf("long min=%ld\n",LONG_MIN);
	printf("long max=%ld\n",LONG_MAX);
	printf("unsigned long max=%lu\n",ULONG_MAX);
	printf("float min=%e\n",FLT_MIN);
	printf("float max=%e\n",FLT_MAX);
}
