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
