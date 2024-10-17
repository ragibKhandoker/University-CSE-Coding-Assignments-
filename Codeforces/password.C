#include <stdio.h>
#include <stdbool.h>
int main(){
    bool flg = true;
    while(flg){
        int c1;
        printf("Enter a password: ");
        scanf("%d",&c1);
        if(c1 == 1999){
            flg = false;
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
    }
}return 0;
}