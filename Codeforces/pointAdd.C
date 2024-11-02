#include <stdio.h>
#include <stdlib.h>
int main(){
    int *c1 = (int *)malloc(sizeof(int));
    printf("Enter a number:\n");
    scanf("%d",&*c1);
    int *c2 = (int *)malloc(sizeof(int));
    printf("Enter another number:\n");
    scanf("%d",&*c2);
    int c3 = *c1 + *c2;
    printf("%d",c3);
    free(c1),free(c2);
    return 0;
}





// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *x1 = (int *)malloc(sizeof(int));
//     printf("Enter the first number:\n");
//     scanf("%d",x1);
//     int *x2 = (int *)malloc(sizeof(int));
//     printf("Enter the 2nd number:\n");
//     scanf("%d",x2);
//     int *x3 = (int *)malloc(sizeof(int));
//     if(*x1 < *x2){
//         *x3 = *x2 - *x1;
//     }else{
//         *x3 = *x1 - *x2;
//     }
//     printf("The absolute difference is:%d\n",*x3);
//     free(x1),free(x2),free(x3);
//     return 0;

// }