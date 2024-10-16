// please run this code in online compiler
#include <stdio.h>
int main(){
    int n,k,l,c,d,p,nl,np;
    printf("Enter number of frirnds: ");
    scanf("%d",&n);
    printf("Enter number of bottles: ");
    scanf("%d",&k);
    printf("Enter amount of drink: ");
    scanf("%d",&l);
    printf("Enter buying times: ");
    scanf("%d",&c);
    printf("Enter number of slices: ");
    scanf("%d",&d);
    printf("Enter amount of salt: ");
    scanf("%d",&p);
    printf("Enter 2nd amount of drink: ");
    scanf("%d",&nl);
    printf("Enter 2nd amount of salt: ");
    scanf("%d",&np);
    int total_drink = k*l;
    int toast_f_drink = total_drink/n;
    int total_lime_av = c*d;
    int toast_f_salt = p/np;
    int total_toast = toast_f_drink;
    if(total_lime_av < total_toast){
        total_toast = total_lime_av;
    }if(toast_f_salt < total_toast){
        total_toast = toast_f_salt;
    }
    int toast_per_friend = total_toast/n;
    printf("%d\n",toast_per_friend);

    return 0;


}