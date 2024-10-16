#include <stdio.h>
int main(){
    int k1;
    printf("Enter a value: ");
    scanf("%d",&k1);
    int arr[k1];
    int j=0;
    while(j<k1){
        printf("Enter array elements:");
        scanf("%d",&arr[j]);
        j++;
    }
    int count_1 = 0;
    int count_2 = 0;
    int i=0;
    while(i<k1){
        if(arr[i] == 0 || arr[i] == 1){
            if(arr[i] == 0){
                count_1++;
            }else{
                count_2++;
            }
        }i++;
    }printf("%d %d",count_1,count_2);
    return 0;
}