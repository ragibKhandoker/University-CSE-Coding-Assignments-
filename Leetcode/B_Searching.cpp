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
    bool flg = true;
    int j=0;
    while(j<c1){
        if(arr[j] == c2){
            printf("%d",j);
            flg = false;
            break;
        }
        j++;
    }if(flg == true){
        printf("-1");
    }
    return 0;
}