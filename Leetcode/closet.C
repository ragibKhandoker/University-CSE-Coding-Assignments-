#include <stdio.h>
#include <stdbool.h>
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
    bool flg = false;
    int j1;
    printf("\nThe target is:\n");
    scanf("%d",&j1);
    for(int k1=0; k1<c1; k1++){
        if(arr[k1] + arr[k1+1] + arr[k1+2] == j1){
            flg = true;
        }
    }
    if(flg){
        printf("Found triplet is %d.\n",j1);
    }else{
        printf("No triplet found %d.\n",j1);
    }

    return 0;
}