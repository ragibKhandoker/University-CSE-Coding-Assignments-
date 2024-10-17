#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int i=1;
    while(i<=c1){
        int j=1;
        while(j<=c1-i){
            printf(" ");
            j++;
        }
        int k=1;
        while(k<=2*i-1){
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    int i1 = c1-1;
    while(i1 >= 1){
        int j1=1;
        while(j1<=c1-i1){
            printf(" ");
            j1++;
        }
        int k1 =1;
        while(k1 <= 2*i1-1){
            printf("*");
            k1++;
        }
        printf("\n");
        i1--;
    }
    return 0;
}