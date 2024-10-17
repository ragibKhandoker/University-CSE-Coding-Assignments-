#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    printf("Enter a value:\n");
    scanf("%d",&c1);
    int arr[c1];
    for(int i=0; i<c1; i++){
        printf("Enter array elements:\n");
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    int j=0;
    while(j<c1){
        printf("%d ",arr[j]);
        j++;
    }
    for(int k1=0; k1<c1-1; k1++){
        for(int k2= k1 +1; k2<c1; k2++){
            if(arr[k1] > arr[k2]){
                int temp = arr[k1];
                arr[k1] = arr[k2];
                arr[k2] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    int y=0;
    while(y<c1){
        printf("%d ",arr[y]);
        y++;
    }
    int p1;
    printf("\nEnter a number:\n");
    scanf("%d",&p1);
    bool flg = false;
    int i1=0;
    while(i1<c1){
        if(p1 == arr[i1]){
            flg = true;
            break;
        }
        i1++;
    }
    if(flg == true){
        printf("Number exists in the array");
        int count = 0;
        int arr1[c1];
        int s1=0;
        while(s1<c1){
            if(p1 == arr[s1]){
                arr1[count] = s1;
                count++;
            }s1++;
        }
        if(count > 0){
            printf("\nNumber found %d times at indices: ",count);
            int i=0;
            while(i<count){
                printf("\n%d ",arr1[i]);
                i++;
            }
        };
    }else{
        printf("Number not found\n");
    }
    return 0;
}



    // int count = 0;
    // int arr1[c1];
    // int s1=0;
    // while(s1<c1){
    //     if(p1 == arr[s1]){
    //         arr1[count] = s1;
    //         count++;
    //     }
    //     s1++;
    // }
    // // printf("%d",s1);
    // if(count > 0){
    //     printf("\nNumber found %d times at indices: ",count);
    //     for(int i=0; i<count; i++){
    //         printf("%d",arr1[i]);
    //     }
    // }else{
    //     printf("\nNumber not found in the array\n");
    // }




    // int c=0;
    // int g1 = 0;
    // while(g1<c1){
    //     if(p1 == arr[g1]){
    //         c++;
    //     }
    //     g1++;
    // }
    // if(c > 0){
    //     printf("\nNumber of same found:\n%d",c);
    // }
