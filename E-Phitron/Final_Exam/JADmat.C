// Please run this code in online compiler
#include <stdio.h>
#include <stdbool.h>
bool matrix(int z, int arr1[z][z]){
    bool flg = false;
    int t=0;
    do{
        for(int y=0; y<z; y++){
            if(t==y || y== z-1-t){
                if(arr1[t][y] != 1){
                    flg = true;
                }
            }else{
                if(arr1[t][y] != 0){
                    flg = true;
                }
            }
        }
        t++;
    }
    while(t<z);
    return !flg;
}
int main(){
    int row;
    printf("Enter row number:\n");
    scanf("%d",&row);
    int col;
    printf("Enter col number:\n");
    scanf("%d",&col);
    if(col != row){
        printf("NO\n");
        return 0;
    }
    int arr1[row][row];
    int s=0;
    while(s<row){
        for(int e=0; e<row; e++){
            printf("Enter matrix elements:\n");
            scanf("%d",&arr1[s][e]);
        }
        s++;
    }
    if(matrix(row,arr1)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}