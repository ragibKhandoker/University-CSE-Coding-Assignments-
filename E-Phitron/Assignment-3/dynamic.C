#include <stdio.h>
#include <stdlib.h>
int main(){
    int f1;
    printf("Enter the number of elements:\n");
    scanf("%d",&f1);
    int *arr = (int *)malloc(f1 * sizeof(int));
    int g=0;
    while(g<f1){
        int k;
        printf("Enter array element:\n");
        scanf("%d",&k);
        arr[g] = k;
        g++;
    }
    printf("The new elements:\n");
    for(int d=0; d<f1; d++){
        printf("%d",arr[d]);
        if(d<f1-1){
            printf(" ");
        }
    }
    printf("\n");
    free(arr);
    return 0;
}