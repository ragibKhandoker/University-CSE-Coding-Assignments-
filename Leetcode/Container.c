#include <stdio.h>
int main(){
    int c1;
    printf("Enter a value: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elemts: ");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Array elements are:\n");
    for(int j=0; j<c1; j++){
        printf("%d ",arr[j]);
    };
    int j1 = 0;
    int max = arr[0];
    while(j1<c1){
        if(max < arr[j1]){
            max = arr[j1];
        }
        j1++;
    }
    printf("\nThe maximum is:\n%d",max);
    int area = max*max;
    printf("\nThe area of the box is:\n%d",area);


    return 0;
}
