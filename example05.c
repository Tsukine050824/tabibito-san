#include "stdio.h"

int check(int num){
    int x;
    if( x  % 50 == 0){
        printf("\nla boi so cua 50");
    } else{
        printf("\nk phai la boi so cua 50");
    }
}

int main(){
    int a;
    printf("\nEnter your number: ");
    scanf("%d", &a);
    check(a);
    printf("\n", check(a));
    return 0;
}