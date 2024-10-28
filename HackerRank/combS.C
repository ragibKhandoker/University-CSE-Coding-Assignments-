#include <stdio.h>
int main(){
    int c1;
    printf("Enter array length:\n");
    scanf("%d",&c1);
    int c2;
    printf("Enter matching value:\n");
    scanf("%d",&c2);
    int arr[c1];
    int i=0;
    while(i<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    printf("The array is:\n");
    int k=0;
    do{
        printf("%d ",arr[k]);
        k++;
    }
    while(k<c1);
    int p=0;
    int c=0;
    do{
        int q = p+1;
        while(q<c1){
            if((arr[p] + arr[q]) % c2 == 0){
                c++;
            }
            q++;
        }
        p++;
    }
    while(p<c1-1);
    printf("\nThe count is:\n%d",c);
    return 0;

}