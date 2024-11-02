#include <stdio.h>
#include <stdlib.h>
int main(){
    int *c1 = (int *)malloc(sizeof(int));
    printf("Enter a number:\n");
    scanf("%d",&*c1);
    int arr[*c1];
    int i=0;
    do{
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
        i++;
    }
    while(i<*c1);
    printf("The array is:\n");
    int j=0;
    do{
        printf("%d ",arr[j]);
        j++;
    }
    while(j<*c1);
    int sum=0;
    int k=0;
    do{
        sum += arr[k];
        k++;
    }
    while(k<*c1);
    if(sum > 0){
        printf("\n%d",sum);
    }else if(sum < 0){
        printf("\n%d",sum*-1);
    }

    free(c1);


    return 0;
}