#include <stdio.h>
int main(){
    int row;
    printf("Enter row values:\n");
    scanf("%d",&row);
    int col;
    printf("Enter col values:\n");
    scanf("%d",&col);
    int arr[row][col];
    int x1=0;
    while(x1<row){
        int x2=0;
        while(x2<col){
            printf("Enter array elements:\n");
            scanf("%d",&arr[x1][x2]);
            x2++;
        }
        x1++;
    }
    printf("The 2D array is:\n");
    int k=0;
    while(k<row){
        printf("\n");
        int e=0;
        while(e<col){
            printf("%d ",arr[k][e]);
            e++;
        }
        k++;
    }
    int e1=0;
    while(e1<col){
        int temp1 = arr[0][e1];
        arr[0][e1] = arr[row-1][e1];
        arr[row-1][e1] = temp1;
        e1++;
    }
    for(int e2=0; e2 < row; e2++){
        int temp2 = arr[e2][0];
        arr[e2][0] = arr[e2][col-1];
        arr[e2][col-1] = temp2;

    }
    printf("\nThe updated array:\n");
    for(int f1=0; f1<row; f1++){
        int f2=0;
        while(f2<col){
            printf("%d ",arr[f1][f2]);
            f2++;
        }
        printf("\n");
    }
    return 0;
}