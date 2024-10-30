#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter a array length:\n");
    scanf("%d",&c1);
    int arr1[c1];
    int i=0;
    do{
        printf("Enter array elements:\n");
        scanf("%d",&arr1[i]);
        i++;
    }
    while(i<c1);
    printf("The array is:\n");
    int j=0;
    do{
        printf("%d ",arr1[j]);
        j++;
    }
    while(j<c1);
    int c2;
    printf("Enter 2nd array length:\n");
    scanf("%d",&c2);
    int arr2[c2];
    int p=0;
    do{
        printf("\nEnter 2nd array elements:\n");
        scanf("%d",&arr2[p]);
        p++;
    }
    while(p<c2);
    printf("The 2nd array is:\n");
    int t=0;
    do{
        printf("%d ",arr2[t]);
        t++;
    }
    while(t<c2);
    bool flg = true;
    int f=0;
    while(f<c1){
        bool found = false;
        int f1=0;
        while(f1<c2){
            if(arr1[f] == arr2[f1]){
                found = true;
                break;
            }
            f1++;
        }
        if(!found){
            flg = false;
            break;
        }

        f++;
    }
    if(flg){
        if(c1 <= c2){
            int c=0;
            int u=0;
            int arr3[c];
            do{
                if(arr1[u] != arr2[u]){
                    c++;
                }
                u++;
            }
            while(u<c2);
            printf("\nCounting the non matching elements:%d\n",arr3[c]);
        }else{
            printf("The second array must be equal or larger than the first one.");
        }

    }else{
        printf("\nAll elements of the first array matches with 2nd one.");
    }
    return 0;
}