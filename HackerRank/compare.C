#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter 1st array length:\n");
    scanf("%d",&c1);
    int arr1[c1];
    int i=0;
    while(i<c1){
        printf("Enter 1st array elemnts:\n");
        scanf("%d",&arr1[i]);
        i++;
    }
    printf("The 1st array is:\n");
    int f1=0;
    do{
        printf("%d\n",arr1[f1]);
        f1++;
    }
    while(f1<c1);
    int c2;
    printf("Enter 2nd array length:\n");
    scanf("%d",&c2);
    int arr2[c2];
    int j=0;
    while(j<c2){
        printf("Enter 2nd array elements:\n");
        scanf("%d",&arr2[j]);
        j++;
    }
    printf("The second array is:\n");
    int j2=0;
    while(j2<c2){
        printf("%d\n",arr2[j2]);
        j2++;
    }
    if(c1 == c2){
        int count1=0;
        int count2=0;
        int k=0;
        while(k<c1 && k<c2){
            if(arr1[k] > arr2[k]){
                count1++;
            }else if(arr1[k] < arr2[k]){
                count2++;
            }
            k++;
        }
        printf("%d %d\n",count1,count2);

    }else{
        printf("The array length is not equal:\n");
    }
    return 0;
}