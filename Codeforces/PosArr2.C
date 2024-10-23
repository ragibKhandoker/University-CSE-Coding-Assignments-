#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter a array length: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements: ");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("The array is:\n");
    int j=0;
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    bool flg = false;
    int ct = 0;
    int k=0;
    do{
        if(arr[k] <=10){
            flg = true;
            ct++;
        }
        else{
            flg = false;
        }
        k++;

    }
    while(k<c1);
    if(flg == true){
        printf("\nThe output is:\n");
        for(int j1 = 0; j1<c1; j1++){
            printf("A[%d] = %d\n", j1, arr[j1]);

        }
    }else{
        printf("\nNo lesser elements found");
    }
    return 0;
}
