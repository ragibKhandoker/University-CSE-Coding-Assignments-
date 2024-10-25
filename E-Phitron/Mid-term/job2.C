#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number:\n");
    scanf("%d",&c1);
    int arr[c1];
    int p=0;
    while(p<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[p]);
        p++;
    }
    printf("The array is:\n");
    for(int i=0; i<c1; i++){
        printf("%d\n",arr[i]);
    }
    int t1=0;
    do{
        if(arr[t1] >=1 && arr[t1] <= 3){
            printf("Junior candidate\n");
        }else if(arr[t1] >= 4 && arr[t1] <= 7){
            printf("Mid-level candidate\n");
        }else if(arr[t1] > 7){
            printf("Senior candidate\n");
        }else if(arr[t1] <= 1){
            printf("Entry-level candidate\n");
        }
    }
    while(t1<c1);

    return 0;
}