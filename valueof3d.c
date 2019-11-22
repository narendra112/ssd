#include<stdio.h>
void main()
{
int a[2][4][3],i,j,k;
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<3;k++)
{
scanf("%d",&a[i][j][k]);
}
}
}
printf("the elements of [2][3][4] are\n");
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<3;k++)
{
printf("%d",a[i][j][k]);
printf(" ");
}
printf("\n");
}
printf("\n");
}
}

