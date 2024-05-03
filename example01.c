#include <stdio.h>
#include "math.h"

void twice(int n){
    int can = sqrt(n);
    if( can * can == n ){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
}
int third(int n){
    int can = sqrt(n);
    if( can * can == n){
        return 1;
    } else{
        return 0;
    }
}


int main(){
    int n = 16;
    if (third(n) == 1) {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}