#include <stdio.h>
int main(){
    int x1;
    printf("Enter a value:\n");
    scanf("%d",&x1);
    int arr[x1];
    int f = 0;
    while(f<x1){
        printf("Enter array elements:\n");
        scanf("%d",&arr[f]);
        f++;
    }
    printf("The array is:\n");
    for(int u=0; u<x1; x1++){
        printf("%d",arr[u]);
    }
    int range[100001] = {0};
    for(int s=0; s<x1; s++){
        range[arr[s]]++;
    }
    int c=0;
    for(int e=0; e<x1; e++){
        if(range[arr[e]] == 1){
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}