#include <stdio.h>
int main(){
    int c1;
    printf("Enter a number: ");
    scanf("%d",&c1);
    int i=0;
    while(i < c1){
        int c2;
        printf("Enter a number:\n");
        scanf("%d",&c2);
        int m = 1;
        int j=1;
        while(j<=c2){
            m *= j;
            j++;
        }printf("%d\n",m);
        i++;
    }
    return 0;

}