#include <stdio.h>
int main(){
    int y1=3;
    char array[y1][100];
    int kl=0;
    while(kl<y1){
        printf("Enter array elements:\n");
        scanf("%s",array[kl]);
        kl++;
    }
    printf("The array elements are:\n");
    for (int i = 0; i < y1; i++) {
        printf("Enter array strings:\n",array[i]);
    }
    char *lit = array[0];
    char *big = array[0];
    int e1=1;
    while(e1<y1){
        int e2;
        for(e2=0; array[e1][e2] != '\0' && lit[e2] != '\0' && array[e1][e2] == lit[e2]; e2++);
        if(lit[e2] > array[e1][e2]){
            lit = array[e1];
        }


        int e3;
        for(e3=0; array[e1][e3] != '\0' && big[e3] != '\0' && array[e1][e3] == big[e3]; e3++);
        if(big[e3] < array[e1][e3]){
            big = array[e1];
        }

        e1++;
    }
    printf("%s\n",lit);
    printf("%s\n",big);

    return 0;
}