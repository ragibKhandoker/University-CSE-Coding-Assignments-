#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    bool flg = false;
    printf("Enter a matrix orders:\n");
    scanf("%d",&c1);
    if(c1 % 3 == 0){
        flg = true;
    }else{
        printf("The matrix order must be 3 or its multiples.");
    }
    if(flg){
        int arrMat[c1][c1];
        printf("Enter matrix elements for n x n order matrix.");
        int i=0;
        do{
            int j=0;
            do{
                printf("\nEnter elements at position [%d][%d]:",i,j);
                scanf("%d",&arrMat[i][j]);
                j++;
            }
            while(j<c1);
            i++;

        }
        while(i<c1);
        printf("\nNxN Matrix:\n");
        int i1=0;
        while(i1<c1){
            for(int j1=0; j1<c1; j1++){
                printf("%d ",arrMat[i1][j1]);
            }
            printf("\n");
            i1++;
        }
        printf("\n");
        int sum1=0;
        int sum2=0;
        int p=0;
        do{
            sum1 += arrMat[p][p];
            sum2 += arrMat[p][c1-p-1];
            p++;
        }
        while(p<c1);
        printf("The updated matrix:\n");
        int u1=0;
        while(u1<c1){
            int u2=0;
            do{
                printf("%d",arrMat[u1][u2]);
                u2++;
            }
            while(u2<c1);
            printf("\n");
            u1++;
        }
        printf("\nPrimary diagonal summation:\n%d",sum1);
        printf("\nSecondary diagonal summation:\n%d",sum2);
        int dif;
        dif = sum1-sum2;
        printf("\nThe normal difference is:\n%d",dif);
        if(dif<0){
            int d = dif*-1;
            printf("\nThe absolute difference is:\n%d",d);
        }else{
            printf("\nThe absolute difference is:\n%d",dif);
        }
    }
    return 0;
}