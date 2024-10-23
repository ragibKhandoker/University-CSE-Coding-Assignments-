#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter array length:\n");
    scanf("%d",&c1);
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
    do{
        printf("%d ",arr[j]);
        j++;
    }
    while(j<c1);
    int k=1;
    int temp = arr[0];
    int y1 = 0;
    while(k<c1){
        if(temp < arr[k]){
           temp = arr[k];
           y1 = k;

        }
        k++;
    }
    printf("\nThe maximum number in array is :\n%d",temp);
    printf("\nThe max index is :\n%d",y1);
    int temp2 = arr[0];
    int y2 = 0;
    for(int k1=0; k1<c1; k1++){
        if(temp2 > arr[k1]){
            temp2 = arr[k1];
            y2 = k1;
        }
    }
    printf("\nThe minimum number in an array is:\n%d",temp2);
    printf("\nThe min index is :\n%d",y2);

    int p1 = 0;
    int x1 = y1;
    int x2 = y2;
    bool flg = false;
    while(p1<c1){
        if(!flg){
            int t = arr[x1];
            arr[x1] = arr[x2];
            arr[x2] = t;
            flg = true;

        }
        p1++;

    }
    printf("\nThe updated output is:\n");
    for(int u1=0; u1<c1; u1++){
        printf("%d ",arr[u1]);
    }
    return 0;
}