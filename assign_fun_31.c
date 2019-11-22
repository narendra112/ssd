#include <stdio.h>

int sum3darray(int a[3][3][3], int size);

void main() {
    int a[3][3][3]={ 0 };
    int size=3;
    printf("The sum is %d\n",sum3darray(a,size));
}

int sum3darray(int a[3][3][3],int size) {
    int i,j,k,sum=0;
        for(i=0;i<size;i++) {
            for(j=0;j<size;j++) {
                for(k=0;k<size;k++) {
                    printf("i=%d, j=%d,k=%d, checkijk=%d  ",i,j,k,a[i][j][k]);
                    sum+=a[i][j][k];
                    printf("sum=%d\n", sum);
                }
            }
        }
return(sum);
}
