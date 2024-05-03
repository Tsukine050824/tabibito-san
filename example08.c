#include "stdio.h"

float chuvi(int x){
    float d;
    d = x * 2 * 3.14;
    return d;
}
float dientich(int x){
    float e;
    e = x * x * 3.14;
    return e;
}



void main(){
    int a, s, v;
    printf("\nEnter the ban kinh: ");
    scanf("%d", &a);
    v = chuvi(a);
    printf("\nChuvi = %d", v);
    s = dientich(a);
    printf("\ns = %d", s);
}