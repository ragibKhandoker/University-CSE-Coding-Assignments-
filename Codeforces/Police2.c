// please run this code in online compiler
#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number : " );
    scanf("%d",&c1);
    if(c1 == 1){
        printf("Minimum two inputs required");
        return 0;
    }
    int arr[c1];
    int j=0;
    while(j<c1){
        printf("Enter array elements: ");
        scanf("%d",&arr[j]);
        j++;
    }
    int count = 0;
    int best = arr[0];
    int worst = arr[0];
    int k=0;
    while(k<c1){
        if(arr[k]>best){
            count++;
            best = arr[k];
        }else if(arr[k] < worst){
            count++;
            worst = arr[k];
        }
        k++;
    }
    printf("%d",count);
    return 0;

}