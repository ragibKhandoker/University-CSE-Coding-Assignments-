#include <stdio.h>
int main(){
    int x1;
    printf("Enter array length:\n");
    scanf("%d",&x1);
    int arr[x1];
    int i=0;
    while(i<x1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("The array is:\n");
    for(int j=0; j<x1; j++){
        printf("%d ",arr[j]);
    }
    int k=0;
    int sum = 0;
    while(k<x1){
        sum+=k;
        k++;
    }
    printf("%d\n",sum);
    return 0;
}
