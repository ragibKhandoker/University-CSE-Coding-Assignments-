#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int j=0;
    int sum = 0;
    while(j<=c1){
        sum += j;
        j++;
    }
    printf("%d",sum);
    return 0;
}