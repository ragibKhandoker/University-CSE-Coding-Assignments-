#include <stdio.h>
int main(){
    int c1;
    printf("Enter array length:\n");
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
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    int lar = arr[0];
    int laridx= 0;
    int k=1;
    while(k<c1){
        if(arr[k] > lar){
            lar = arr[k];
            laridx = k;
        }
        k++;
    }
    printf("\nThe largest is:\n%d",lar);
    int sum1 = 0;
    if(arr[0] == lar){
        int t=0;
        while(t<c1){
            sum1 = 0;
            t++;
        }
        printf("\nLeft sum:%d",sum1);
    }else{
        int y=0;
        do{
            sum1 += arr[y];
            y++;
        }
        while(y<laridx);
        printf("\nLeft sum:%d",sum1);
    }
    int sum2=0;
    int z = laridx + 1;
    do{
        sum2 += arr[z];
        z++;
    }
    while(z<c1);
    printf("\nRight sum:%d",sum2);
    if(sum1 == sum2){
        printf("\nYES");
    }else{
        printf("\nNO");
    }
    return 0;
}