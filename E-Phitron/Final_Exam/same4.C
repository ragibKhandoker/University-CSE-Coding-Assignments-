#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
int main(){
    char w1[101];
    scanf("%s",w1);
    char w2[101];
    scanf("%s",w2);
    char w3[101];
    scanf("%s",w3);
    int ct = 0;
    bool flg = false;
    if(strlen(w1) != strlen(w2) || strlen(w2) != strlen(w3)){
        flg = true;
    }
    for(int x=0; x<strlen(w1); x++){
        if(!islower(w1[x]) || !islower(w2[x]) || !islower(w3[x])){
            flg = true;
            break;
        }
    }
    if(!flg){
        for(int d=0; d<strlen(w1); d++){
            if(w1[d] == w2[d] && w2[d] == w3[d]){
                continue;
            }else if(w1[d] == w2[d] || w2[d] == w3[d] || w3[d] == w1[d]){
                ct++;
            }else{
                ct+=2;
            }
        }
    }
    if(!flg){
        printf("%d\n",ct);
    }
    return 0;
}