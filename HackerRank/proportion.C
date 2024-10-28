#include <stdio.h>
int main(){
    int c1;
    printf("Enter array length:\n");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("The array is:\n");
    int k=0;
    while(k<c1){
        printf("%d ",arr[k]);
        k++;
    }
    int u1=0;
    int count1=0;
    int count2=0;
    int count3=0;
    do{
        if(arr[u1] > 0){
            count1++;
        }else if(arr[u1] < 0){
            count2++;
        }else if(arr[u1] == 0){
            count3++;
        }
        u1++;
    }
    while(u1<c1);
    printf("\nPositive count:\n%d",count1);
    printf("\nNegative count:\n%d",count2);
    printf("\nZero count:\n%d",count3);
    float d1 = (float)count1/c1;
    printf("\n%.4f",d1);
    float d2 = (float)count2/c1;
    printf("\n%.4f",d2);
    float d3 = (float)count3/c1;
    printf("\n%.4f",d3);
    return 0;

}