#include<stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elemts: ");
        scanf("%d",&arr[i]);
        i++;
    }
    int j=0;
    while(j<c1){
        if(arr[j] <= 10){
            printf("Arr[%d] = %d\n",j,arr[j]);
        }
        // else if(arr[j] > 10){
        //     printf("0");
        // }
        j++;
    }
    return 0;



}