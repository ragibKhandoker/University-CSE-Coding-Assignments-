#include <stdio.h>
int main(){
    int p1;
    // printf("Enter a number: ");
    scanf("%d",&p1);
    int array[p1];
    for(int i=0; i<p1; i++){
        scanf("%d",&array[i]);
    }
    // int i=0;
    // while(i<c1){
    //     // printf("Enter array elements: ");
    //     scanf("%d",&arr[i]);
    //     i++;
    // }
    int lg = array[0];
    int j=1;
    while(j<p1){
        if(lg < array[j]){
            lg = array[j];
        }
        j++;

    }
    // printf("%d",larger);
    int k=0;
    while(k<p1){
        int g1 = lg - array[k];
        printf("%d ",g1);
        k++;
    }

    return 0;
}
