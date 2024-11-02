#include <stdio.h>
#include <stdlib.h>
int main(){
    int *c1 = (int *)malloc(sizeof(int));
    printf("Enter a number:\n");
    scanf("%d",*&c1);
    int arr[*c1];
    for(int j=0; j<*c1; j++){
        printf("Enter array elements:\n");
        scanf("%d",&arr[j]);
    }
    printf("The array is:\n");
    int h=0;
    do{
        printf("%d ",arr[h]);
        h++;
    }
    while(h<*c1);
    int s = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    do{
        if(arr[i] > 0){
            arr[i] = 1;
        }else if(arr[i] < 0){
            arr[i] = 2;
        }
        i++;
    }
    while(i<s);
    printf("The updated array:\n");
    int e=0;
    do{
        printf("%d ",arr[e]);
        e++;
    }
    while(e<*c1);
    free(c1);

    return 0;
}