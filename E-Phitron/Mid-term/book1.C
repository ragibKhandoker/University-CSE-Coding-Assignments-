#include <stdio.h>
int main(){
    int c1,c2;
    printf("Enter a number of books:\n");
    scanf("%d",&c1);
    printf("Enter a time:\n");
    scanf("%d",&c2);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("The array is:\n");
    int j=0;
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    int sum=0;
    int ct = 0;
    for(int k=0; k<c1; k++){
        sum += arr[k];
        if(sum <= c2){
            ct++;
        }
    }
    printf("%d",ct);
    return 0;

}