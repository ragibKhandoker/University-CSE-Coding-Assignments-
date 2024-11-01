#include <stdio.h>
#include <stdbool.h>
int main(){
    int t1;
    printf("Enter order of matrix:\n");
    scanf("%d",&t1);
    int matrixArr[t1][t1];
    for(int p1=0; p1<t1; p1++){
        int p2=0;
        while(p2<t1){
            printf("Enter array elements [%d] [%d]:",p1,p2);
            scanf("%d",&matrixArr[p1][p2]);
            p2++;
        }
    }
    bool check = true;
    int u1=0;
    while(u1<t1){
        int u2=0;
        while(u2<t1){
            if((u1 != u2 && matrixArr[u1][u2] !=0) || (u1 == u2 && matrixArr[u1][u2] != 1)){
                check = false;
                break;
            }
            u2++;
        }
        if(!check){
            break;
        }
        u1++;

    }if(check){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;

}