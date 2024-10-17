#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int i=0;
    while(i<c1){
        int x1,x2;
        printf("Enter 1st number: ");
        scanf("%d",&x1);
        printf("Enter 2nd number: ");
        scanf("%d",&x2);
        if(x1 > x2){
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }
        int sum = 0;
        int j = x1+1;
        while(j<x2){
            if(j % 2 != 0){
                sum += j;
            }
            j++;
        }
        i++;
        printf("%d\n",sum);
    }
    return 0;

}
