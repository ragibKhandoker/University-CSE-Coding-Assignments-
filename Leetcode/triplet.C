#include <stdio.h>
#include <stdbool.h>
int main(){
    int c1;
    bool flg = true;
    printf("Enter a number: ");
    scanf("%d",&c1);
    if (c1 % 3 == 0){
        flg = true;
    }else{
        flg = false;
    }
    if(flg){
        int arr[c1];
        int i=0;
        while(i<c1){
            printf("Enter array elemts: ");
            scanf("%d",&arr[i]);
            i++;
        }
        printf("Array elements are:\n");
        for(int j=0; j<c1; j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
        bool flg2 = true;
        int p1 = 0;
        while(p1<c1-2){
            int p2=p1+1;
            while(p2<c1-1){
                int p3=p2+1;
                while(p3<c1){
                    if(arr[p1] + arr[p2] + arr[p3] == 0){
                        printf("Triplets found of Zero Sum: [%d, %d, %d]\n",arr[p1],arr[p2],arr[p3]);
                        flg2 = false;
                    }
                    p3++;
                }
                p2++;
            }p1++;
        }
        if(flg2 == true){
            printf("No triplets found of zero sum\n");
        }
        printf("Spliting array:\n");
        int k=0;
        while(k<c1){
            printf("[");
            int l1=0;
            while(l1<3){
                if(k+l1 < c1){
                    printf("%d",arr[k+l1]);
                    if(l1<2 && k+l1+1<c1){
                        printf(",");
                    }
                }
                l1++;
            }
            printf("]\n");
            k+=3;

        }

    }else{
        printf("The number is not divisible by 3");
    }
    return 0;


}