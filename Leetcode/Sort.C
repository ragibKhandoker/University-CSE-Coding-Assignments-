#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int arr[c1],originalArr[c1];
    for(int i=0; i<c1; i++){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        originalArr[i] = arr[i];
    }
    for(int j=0; j<c1-1; j++){
        for(int k=j+1; k<c1; k++){
            if(arr[j] > arr[k]){
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    printf("Updating array:\n");
    int h=0;
    while(h<c1){
        printf("%d\n",arr[h]);
        h++;
    }
    printf("\n");
    printf("Original array:\n");
    int v=0;
    while(v<c1){
        printf("%d\n",originalArr[v]);
        v++;

    }
    return 0;
}