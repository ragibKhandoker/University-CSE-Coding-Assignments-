#include <stdio.h>
int main(){
    int c1;
    printf("Enter row number.\n");
    scanf("%d",&c1);
    int c2;
    printf("Enter column number.\n");
    scanf("%d",&c2);
    int c3;
    printf("Enter taken inputs.\n");
    scanf("%d",&c3);
    int arr[c1][c2];
    int i=0;
    while(i<c1){
        int j=0;
        while(j<c2){
            printf("Enter matrix elements:\n");
            scanf("%d",&arr[i][j]);
            j++;
        }
        i++;
    }
    printf("The matrix is:\n");
    for(int y=0; y<c1; y++){
        for(int z=0; z<c2; z++){
            printf("%d ",arr[y][z]);
        }
        printf("\n");
    }
    printf("\n");
    int g=0;
    while(g<c3){
        int e;
        printf("Enter a number to search in the matrix:\n");
        scanf("%d",&e);
        int c=0;
        int y=0;
        while(y<c1){
            int z = 0;
            while(z<c2){
                if(arr[y][z] == e){
                    c++;
                }
                z++;
            }
            y++;
        }
        printf("%d\n",c);
        g++;

    }
    return 0;

}