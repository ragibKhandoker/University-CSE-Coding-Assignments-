#include <stdio.h>
int main(){
    int y1;
    printf("Enter array length:\n");
    scanf("%d",&y1);
    int arr[y1];
    int x1=0;
    while(x1<y1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[x1]);
        x1++;
    }
    printf("The array is:\n");
    int j=0;
    while(j<y1){
        printf("%d",arr[j]);
        j++;
    }
    int max = arr[0];
    int u1=1;
    int c=1;
    do{
        if(arr[u1] > max){
            max = arr[u1];
            c=1;
        }else if(arr[u1] == max){
            c++;
        }
        u1++;
    }
    while(u1<y1);
    printf("\nThe max is:\n%d",max);
    printf("\nThe max count is:\n%d",c);
    return 0;


}