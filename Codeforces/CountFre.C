#include <stdio.h>
#include <string.h>
int main(){
    char String[1001];
    int arr[26] = {0};
    printf("Enter a string:\n");
    scanf("%s",String);
    int j=0;
    while(String[j] != '\0'){
        arr[String[j]-'a']++;
        j++;
    }
    int k=0;
    while(k<26){
        if(arr[k] > 0){
            printf("%c : %d\n", k + 'a', arr[k]);
        }
        k++;
    }
    return 0;
}