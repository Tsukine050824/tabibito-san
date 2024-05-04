#include "stdio.h"
#include "math.h"

float GetArea(int x, int y, int z){
    float S, P;
    P = (x + y + z) / 2;
    S = sqrt(P * (P - x) * (P - y) * (P - z));
    return S;
}

int main(){
    float a, b, c, S;
    printf("\nThe first: ");
    scanf("%f", &a);
    printf("\nThe second: ");
    scanf("%f", &b);
    printf("\nThe third: ");
    scanf("%f", &c);
    S = GetArea(a, b, c);
    printf("Dien tich triangle la: %f", S);
    return 0;
}