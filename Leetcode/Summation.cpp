#include<stdio.h>
int main(){
    int c1;
    int total = 0;
    int ab_sum = 0;
    printf("Enter a number: ");
    scanf("%d",&c1);
    for(int i=0; i<c1; i++){
        int c2;
        printf("Enter next number: ");
        scanf("%d",&c2);
        total = total + c2;
        if(total < 0){
            ab_sum = total*(-1);
        }else{
            ab_sum = total * 1;
        }
    }printf("Total sum is %d\n",total);
    printf("Absolute sum is %d\n",ab_sum);
    return 0;
}