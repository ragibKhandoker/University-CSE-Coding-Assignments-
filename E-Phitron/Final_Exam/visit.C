#include <stdio.h>
int main(){
    int c1;
    printf("Enter a value:");
    scanf("%d",&c1);
    int y=0;
    do{
        int x1;
        printf("\nEnter a number:\n");
        scanf("%d",&x1);
        for(int j=1; j<=x1; j++){
            printf("%d ",j);
        }
        for(int k=x1-1; k>=1; k--){
            printf("%d ",k);
        }
        printf("\n");
        y++;

    }
    while(y<c1);
    return 0;
}