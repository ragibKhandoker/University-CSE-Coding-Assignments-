#include <stdio.h>
int main(){
    int c1,c2;
    char h1;
    printf("Enter a number: \n");
    scanf("%d", &c1);
    printf("Enter another number: \n");
    scanf("%d", &c2);
    printf("Enter a character: \n");
    scanf(" %c", &h1);
    int j1 = c1 + c2;
    int j2 = c1 - c2;
    int j3 = c1*c2;
    int j4;
    printf("Enter output value: \n");
    scanf("%d", &j4);
    if(h1 == '+'){
        if(j4 == j1){
            printf("Yes\n");
        }else{
            printf("%d\n",j1);
        }
    }else if(h1 == '-'){
        if(h1 == '-'){
            if(j4 == j2){
                printf("Yes\n");
            }else{
                printf("%d\n",j2);
            }
        }
    }else if(h1 == '*'){
        if(h1 == '*'){
            if(j4 == j3){
                printf("Yes\n");
            }else{
                printf("%d\n",j3);
            }
        }
    }return 0;

}