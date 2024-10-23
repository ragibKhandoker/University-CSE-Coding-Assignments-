#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number:\n");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Array elements are:\n");
    int j=0;
    do{
        printf("%d ",arr[j]);
        j++;
    }
    while(j<c1);
    int k=0;
    do{
        int temp = arr[k];
        arr[k] = arr[c1-k-1];
        arr[c1-k-1] = temp;
        k++;
    }
    while(k<c1/2);

    printf("\nReverse array is:\n");
    int l=0;
    while(l<c1){
        printf("%d ",arr[l]);
        l++;
    }
    return 0;

}