#include <stdio.h>
int main(){
    int c1,c2,c3;
    printf("Enter array length:\n");
    scanf("%d",&c1);
    printf("Enter 1st:\n");
    scanf("%d",&c2);
    printf("Enter 2nd:\n");
    scanf("%d",&c3);
    int arr[c1];
    int i=0;
    do{
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    while(i<c1);
    printf("The array is:\n");
    int j=0;
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    int ct=0;
    int g1=0;
    do{
        if(arr[g1] >= c2 && arr[g1] <= c3){
            ct++;
        }
        g1++;
    }
    while(g1<c1);
    printf("\n%d",ct);
    return 0;
}