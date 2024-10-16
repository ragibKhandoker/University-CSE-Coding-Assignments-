#include <stdio.h>
int main(){
    long long int c1,c2;
    printf("Enter 1st value: ");
    scanf("%lld",&c1);
    printf("Enter 2nd value: ");
    scanf("%lld",&c2);
    long long int c3 = c1*c2;
    printf("%lld",c3);
    return 0;
}