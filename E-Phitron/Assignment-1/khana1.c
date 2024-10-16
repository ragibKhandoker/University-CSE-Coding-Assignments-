#include <stdio.h>
int main(){
    int c1;
    printf("Enter a value: ");
    scanf("%d",&c1);
    if(c1 >= 1000){
        printf("Three Kacchi");
    }else{
        if(c1 >= 500){
            printf("One Large Pizza");
        }else if(c1 < 500 && c1 >= 250){
            printf("Three Small Burger");
        }else if(c1 >= 100){
            printf("Three Fuchka");
        }else{
            printf("Nothing");
        }
    }return 0;
}