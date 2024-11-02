#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[3];
    int *p = arr;
    printf("Enter three numbers:\n");
    int i=0;
    while(i<3){
        scanf("%d",&*p);
        p++;
        i++;
    }
    p = arr;
    int li = *p;
    int bg = *p;
    int k=0;
    do{
        if(*p < li){
            li = *p;
        }else if(*p > li){
            bg = *p;
        }
        p++;
        k++;
    }
    while(k<3);
    printf("%d %d",li,bg);
    return 0;

}