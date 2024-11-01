#include <stdio.h>
#include <stdlib.h>
int main(){
    int *x1 = (int *)malloc(sizeof(int));
    printf("Enter the first number:\n");
    scanf("%d",x1);
    int *x2 = (int *)malloc(sizeof(int));
    printf("Enter the 2nd number:\n");
    scanf("%d",x2);
    int *x3 = (int *)malloc(sizeof(int));
    if(*x1 < *x2){
        *x3 = *x2 - *x1;
    }else{
        *x3 = *x1 - *x2;
    }
    printf("The absolute difference is:%d\n",*x3);
    free(x1),free(x2),free(x3);
    return 0;

}