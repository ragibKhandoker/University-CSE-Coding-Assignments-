// Please run the code in online compiler
#include <stdio.h>
int main(){
    int c1;
    printf("Enter a value: ");
    scanf("%d",&c1);
    int arr[c1];
    int j=0;
    while(j<c1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[j]);
        j++;
    }
    printf("Array elements are:\n");
    for(int i=0; i<c1; i++){
        printf("%d ",arr[i]);
    }
    int h1;
    printf("\nEnter a number to all the instances:\n");
    scanf("\n%d",&h1);
    int k1=0;
    while(k1<c1){
        if(arr[k1] == h1){
            int k3=k1;
            while(k3<c1-1){
                arr[k3] = arr[k3+1];
                k3++;
            }c1--;
        }else{
            k1++;
        }
    }
    printf("Array after removing all instances of %d:\n",h1);
    int k4=0;
    while(k4 < c1){
        printf("%d ",arr[k4]);
        k4++;
    }
    printf("\n");
    int k5=0;
    int count = 0;
    while(k5<c1){
        count++;
        k5++;
    }
    printf("Count of the array elemnts:\n%d",count);
    return 0;
}