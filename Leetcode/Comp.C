#include <stdio.h>
int main(){
    int c1,c2;
    char j1;
    printf("Enter 1st number: ");
    scanf("%d",&c1);
    printf("Enter 2nd number: ");
    scanf("%d",&c2);
    printf("Enter a symbol: ");
    scanf(" %c",&j1);
    if(j1 == '>'){
        if(c1 > c2){
            printf("Right");
        }else if(c1 < c2){
            printf("Wrong");
        }
    }
    else if(j1 == '<'){
        if(c1 < c2){
            printf("Right");
        }else if(c1 > c2){
            printf("Wrong");
        }
    }else if(j1 == '='){
        if(c1 == c2){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    return 0;
}