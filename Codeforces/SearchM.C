#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter row number:\n");
    scanf("%d",&c1);
    int c2;
    printf("Enter column number:\n");
    scanf("%d",&c2);
    int arr[c1][c2];
    int i=0;
    do{
        int j=0;
        do{
            printf("Enter elements at positions: [%d][%d]:\n",i,j);
            scanf("%d",&arr[i][j]);
            j++;
        }
        while(j<c2);
        i++;
    }
    while(i<c1);
    printf("The array is:\n");
    int i1=0;
    do{
        int j1=0;
        do{
            printf("%d ",arr[i1][j1]);
            j1++;
        }
        while(j1<c2);
        printf("\n");
        i1++;
    }
    while(i1<c1);
    int r;
    printf("Enter a number:\n");
    scanf("%d",&r);
    bool flg = false;
    int y=0;
    do{
        int z=0;
        do{
            if(arr[y][z] == r){
               flg = true;
            }
            z++;
        }
        while(z<c2);
        y++;
    }
    while(y<c1);
    if(flg){
        printf("Will not take number.");
    }else{
        printf("will take number.");
    }
    return 0;
}