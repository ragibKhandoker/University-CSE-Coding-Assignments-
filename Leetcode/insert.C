#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter an array length:\n");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    do{
       printf("Enter array elements:\n");
       scanf("%d",&arr[i]);
       i++;
    }
    while(i<c1);
    printf("The array is:\n");
    int j=0;
    do{
        printf("%d ",arr[j]);
        j++;
    }
    while(j<c1);
    int k;
    printf("\nEnter a target number:\n");
    scanf("%d",&k);
    bool flg = false;
    int h1=0;
    do{
        if(arr[h1] == k){
            flg = true;
            break;
        }
        h1++;
    }
    while(h1<c1);
    if(flg){
        printf("The index is:\n%d",h1);
    }else{
        printf("The index is Not found");
    }
    return 0;
}