#include<stdio.h>
void main()
{
int a[100][100],i,j;
printf("Enter elements of matrix\n");
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
if((a[0][0]||a[0][5])||(a[1][5]||a[5][5])||(a[5][4]||a[5][0])||(a[4][0]||a[1][0]))
{
printf(" ");
}
else
{
printf("%d ",a[i][j]);
}
}
printf("\n");
}
}

