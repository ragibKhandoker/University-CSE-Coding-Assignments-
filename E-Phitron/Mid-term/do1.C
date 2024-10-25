#include <stdio.h>
int main(){
    int k1,k2;
    printf("Enter a N number:\n");
    scanf("%d",&k1);
    printf("Enter a k number:\n");
    scanf("%d",&k2);
    int arr[k2];
    int s1=0;
    do{
        arr[s1] = s1+1;
        s1++;
    }
    while(s1<k2);
    printf("The array elements are:\n");
    int i=0;
    while(i<k1){
        int j=0;
        do{
            printf("%d ",arr[j]);
            j++;
        }
        while(j<k2);
        printf("\n");
        i++;
    }
    return 0;
}