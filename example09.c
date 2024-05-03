#include "stdio.h"

int giaithua(int n){
    if (n == 1)
        return 1;
    return n * giaithua(n - 1);
}
int main(){
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nGiai thua cua 1 so la: %d", n, giaithua(n));
}