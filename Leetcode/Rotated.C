#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter a value: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Array elements are:\n");
    for(int j=0; j<c1; j++){
        printf("%d ",arr[j]);
    }
    int c2;
    printf("\nEnter a number:\n");
    scanf("%d",&c2);
    bool flg = true;
    int k=0;
    while(k<c1){
        if(c2 == arr[k]){
            flg = false;
            break;
        }else{
            flg = true;
        }
        k++;
    }
    if(flg == false){
        printf("%d",k);
    }
    else{
        printf("-1");
    }
    return 0;
}