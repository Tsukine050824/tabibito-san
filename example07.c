#include "stdio.h"
int caculatesum(int x, int y, int z){
    int d;
    d = x + y + z;
    return (d);
}
void main(){
    int a, b, c, sum;
    printf("\nEnter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = caculatesum(a, b, c);
    printf("\nsum = %d", sum);
}
