#include "stdio.h"
#include "math.h"

float Tongtien(float x, float y, int z){
    float Total = (x + y) * z;
    float Tax = Total * 0.1;
    if(Total >= 100){
        Total *= 0.95;
    } else if(Total >= 200){
        Total *= 0.98;
    }
    return Total + Tax;
}
int main(){
    float a, b;
    int c;
    printf("\nEnter the first price: ");
    scanf("%f", &a);
    printf("\nEnter the 2nd price: ");
    scanf("%f", &b);
    printf("\nEnter the amount: ");
    scanf("%d", &c);
    float all = Tongtien(a, b, c);
    printf("Tong tien da kem thue va giam gia la: $%.2f\n",all);
    return 1;
}