// Please run this code in online compiler
#include <stdio.h>
int main(){
    int t1;
    // printf("Enter a number: ");
    scanf("%d",&t1);
    int j1=1;
    while(j1<=t1){
        for(int j2=1; j2<=j1; j2++){
            printf("%d",j2);
        }
        printf("\n");
        j1++;
    };
    int k1 = t1-1;
    while(k1 >= 1){
        int k3 = t1 - k1;
        while(k3 > 0){
            printf(" ");
            k3--;
        }
        for(int k2 = 1; k2<= k1; k2++){
            printf("%d",k2);
        }
        printf("\n");
        k1--;
    }
    return 0;
}
