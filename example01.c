#include "stdio.h"
#include "math.h"

float chuvi(float x, float y){
    float V;
    V = (x + y) * 2;
    return V;
}
float dientich(float x, float y){
    int S;
    S = x * y;
    return S;
}
int main(){
    float w, h;
    printf("\n2 canh cua tam giac la: ");
    scanf("%f %f", &w, &h);
    chuvi(w, h);
    printf("chu vi cua hcn la: %f", chuvi(w, h));
    dientich(w, h);
    printf("dien tich cua hcn la: %f", dientich(w, h));
    return 1;
}