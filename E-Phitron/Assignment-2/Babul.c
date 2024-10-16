#include <stdio.h>
int main(){
    char c1;
    printf("Enter a Character: ");
    scanf("%c",&c1);
    if(c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}