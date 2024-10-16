#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements: ");
        scanf("%d",&arr[i]);
        i++;
    }
    int c2;
    printf("Enter a number: ");
    scanf("%d",&c2);
    int j=0;
    while(j<c1){
        if(arr[j] == c2){
            printf("%d\n",j+1);
        }
        j++;
    }
    return 0;

}