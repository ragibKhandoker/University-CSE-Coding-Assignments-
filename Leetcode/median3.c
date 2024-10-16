#include <stdio.h>
int main(){
    int c1,c2;
    printf("Enter a 1st arr length: ");
    scanf("%d",&c1);
    printf("Enter 2nd arr length: ");
    scanf("%d",&c2);
    int arr1[c1],arr2[c2];
    int i=0;
    while(i<c1){
        printf("Enter elemnts for the first array: ");
        scanf("%d",&arr1[i]);
        i++;
    }
    int j=0;
    while(j<c2){
        printf("Enter elements for the second array: ");
        scanf("%d",&arr2[j]);
        j++;
    }
    int arr3[c1+c2];
    int k=0;
    while(k<c1){
        arr3[k] = arr1[k];
        k++;
    }
    int l=0;
    while(l<c2){
        arr3[k] = arr2[l];
        k++;
        l++;

    }
    printf("Concatenated array:\n");
    for(int g1=0; g1<c1+c2; g1++){
        printf("%d ",arr3[g1]);
    };
    for(int u1=0; u1<(c1+c2)-1;u1++){
        for(int u2=0; u2<(c1+c2)-u1+1; u2++){
            if(arr3[u2] > arr3[u2+1]){
                int temp = arr3[u2];
                arr3[u2] = arr3[u2+1];
                arr3[u2+1] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    int u3=0;
    while(u3<c1+c2){
        printf("%d ",arr3[u3]);
        u3++;
    }
    int x1 = c1+c2;
    if(x1 % 2 == 0){
        float p1 = (arr3[x1/2-1] + arr3[x1/2])/2.0;
        printf("\nMedian: %.1f",p1);
    }else{
        int p2 = arr3[x1/2];
        printf("\nMedian: %d",p2);
    }
    return 0;
}