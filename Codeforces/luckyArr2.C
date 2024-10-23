#include <stdio.h>
// #include <stdbool.h>
int main(){
    int c1;
    printf("Enter a array length:\n");
    scanf("%d",&c1);
    int arr[c1];
    int i=0;
    do{
        printf("Enter array elememts:\n");
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
    // bool flg = false;
    int min = arr[0];
    int k=1;
    do{
        if(min > arr[k]){
            min = arr[k];
            // flg = true;
        }
        k++;
    }
    while(k<c1);

    printf("\nThe min is :\n%d",min);

    if(min){
        int s1=0;
        int ct=0;
        while(s1 < c1){
            if(arr[s1] == min){
                ct++;
            }
            s1++;
        }
        printf("\nThe count value of that: \n%d",ct);
        if(ct % 2 == 0){
            printf("\nnot lucky");
        }else{
            printf("\nlucky");
        }
    }

    return 0;
}