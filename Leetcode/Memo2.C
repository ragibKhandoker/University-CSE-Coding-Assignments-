#include <stdio.h>
int main(){
    int c1,c2,k;
    printf("Enter 1st number:\n");
    scanf("%d",&c1);
    printf("Enter 2nd number:\n");
    scanf("%d",&c2);
    printf("Enter divisible number:\n");
    scanf("%d",&k);
    if(c1 % k == 0 && c2 % k == 0){
        printf("Both");
    }else if(c1 % k == 0 && c2 % k != 0){
        printf("Memo wins");
    }else if(c1 % k != 0 && c2 % k == 0){
        printf("Momo wins");
    }else{
        printf("No one");
    }
    return 0;
}