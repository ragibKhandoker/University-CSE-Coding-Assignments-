#include <stdio.h>
int main(){
    int h1;
    scanf("%d",&h1);
    int arr[4];
    for(int i=0; i<h1; i++){
        for(int u=0; u<4; u++){
            scanf("%d",&arr[u]);
        }
        for(int f1=0; f1<4-1;f1++){
            for(int f2=0; f2<4-1-f1; f2++){
                if(arr[f2] > arr[f2 +1]){
                    int temp = arr[f2];
                    arr[f2]  = arr[f2+1];
                    arr[f2+1] = temp;
                }
            }
        }
        int k=0;
        if(arr[0] == 0 || arr[1] == 0 || arr[2] == 0){
            printf("0\n");
            k=1;
        }else{
            if(arr[3]%(arr[0]*arr[1]*arr[2]) == 0){
                int g = arr[3]/(arr[0]*arr[1]*arr[2]);
                printf("%d\n",g);
                k = 1;
            }
        }
        if(!k){
            printf("-1\n");
        }
    }
    return 0;
}
