#include <stdio.h>
int main(){
    int c1;
    printf("Enter an array:\n");
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
    int maj = arr[0];
    int c = 1;
    int k=1;
    do{
        if(arr[k] == maj){
            c++;
        }else{
            c--;
        }
        if(c == 0){
            maj = arr[k];
            c =1;
        }
        k++;
    }
    while(k<c1);
    printf("\n%d",maj);
    int ct=0;
    int i1=0;
    while(i1<c1){
        if(arr[i1] == maj){
            ct++;
        }
        i1++;
    }
    if(ct>c1/2){
        printf("\n%d",maj);
    }else{
        printf("No majority.\n");
    }
    return 0;
}