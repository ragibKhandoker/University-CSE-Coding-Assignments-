#include <stdio.h>
int main(){
    int c1;
    printf("Enter array length:\n");
    scanf("%d",&c1);
    int arr[c1];
    int k=0;
    do{
        printf("Enter array elements:\n");
        scanf("%d",&arr[k]);
        k++;
    }
    while(k<c1);
    printf("The array is:\n");
    int j=0;
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    int sum1=0;
    int sum2=0;
    int f1=0;
    while(f1<c1-1){
        sum1 += arr[f1];
        f1++;
    }
    int f2=1;
    while(f2<c1){
        sum2 += arr[f2];
        f2++;
    }
    printf("\nThe minimum sum:\n%d",sum1);
    printf("\nThe maximum sum:\n%d",sum2);

    return 0;
}