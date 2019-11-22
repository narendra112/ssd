#include<stdio.h>
struct a
{
	int feet;
	float inch;
}f1,f2,sum;
void main()
{
	printf("Enter 1st value feet\n");
	scanf("%d",&f1.feet);
	printf("Enter 1st value inch\n");
	scanf("%f",&f1.inch);
	printf("Enter 2nd value feet\n");
	scanf("%d",&f2.feet);
	printf("Enter 2nd value inch\n");
	scanf("%f",&f2.inch);
	sum.feet=f1.feet+f2.feet;
	sum.inch=f1.inch+f2.inch;
	printf("Sum of feet=%d'\nSum of inch=%.1f\"",sum.feet,sum.inch);
}
