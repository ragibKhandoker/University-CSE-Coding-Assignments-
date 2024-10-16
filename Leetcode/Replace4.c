#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements: ");
        scanf("%d",&arr[i]);
        i++;
    }
    int j=0;
    while(j<c1){
        if(arr[j] == 0){
            printf("0 ");
        }else{
            if(arr[j] < 0){
                arr[j] = 2;
                printf("2 ");
            }else{
                arr[j] = 1;
                printf("1 ");
            }
        }j++;

    }return 0;

}