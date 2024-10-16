#include <stdio.h>
int main(){
    int c1;
    printf("Enter a value: ");
    scanf("%d",&c1);
    if(c1 % 3 == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}