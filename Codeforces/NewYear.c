// please run this code in online compiler
#include <stdio.h>
int main(){
    int c1,c2;
    printf("Enter number of problems: ");
    scanf("%d",&c1);
    printf("Enter number of minutes: ");
    scanf("%d",&c2);
    int t_available = 240-c2;
    int t_time = 0;
    int t_prob = 0;
    int i=1;
    while(i<=c1){
        t_time += 5*i;
        if(t_time <= t_available){
            t_prob++;
        }else{
            break;
        }
        i++;
    }
    printf("%d",t_prob);
    return 0;
}