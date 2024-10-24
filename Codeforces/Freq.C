#include <stdio.h>
int main(){
    int c1,c2;
    printf("Enter a array length:\n");
    scanf("%d",&c1);
    printf("Enter another number:\n");
    scanf("%d",&c2);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("The array elements are:\n");
    int j=0;
    do{
        printf("%d ",arr[j]);
        j++;
    }
    while(j<c1);
    printf("\nThe counts are:\n");
    int y=1;
    do{
        int ct=0;
        int y2=0;
        do{
            if(arr[y2] == y){
                ct++;
            }
            y2++;
        }
        while(y2<c1);
        printf("\n%d",ct);
        y++;
    }
    while(y<=c2);
    return 0;

}
