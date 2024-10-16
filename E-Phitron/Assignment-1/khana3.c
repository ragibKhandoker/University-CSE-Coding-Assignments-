#include <stdio.h>
int main(){
    int c1;
    printf("Enter a value: ");
    scanf("%d",&c1);
    for(int i=1; i<= c1; i++){
        if(i % 3 == 0 || i % 5 == 0){
            printf("%d Yes\n",i);
        }else{
            printf("%d No\n",i);
        }
    }return 0;
}