#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elemnts:\n");
        scanf("%d",&arr[i]);
        i++;
    };
    printf("Array elemnts are:\n");
    int j=0;
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    printf("\n");
    int c =0;
    for(int k=0; k<c1; k++){
        bool flg = false;
        int q1 = 0;
        while(q1 < k){
            if(arr[k] == arr[q1]){
                flg = true;
                break;
            }q1++;
        };
        if(flg == false){
            c++;
        };
    }

    printf("Number of unique array:\n%d",c);

    return 0;


}