#include "stdio.h"

void Inrabien(int x, int y){
    for (int num = x; num < y; ++num) {
        if(num % 50 == 0){
            printf("%d\n", num);
        }
    }
}

int main(){
    int num1, num2;
    printf("\nNhap so dau tien: ");
    scanf("%d", &num1);
    printf("\nNhap so thu 2: ");
    scanf("%d", &num2);
    if (num1 <num2){
        printf("cac so chia het cho 50 tu %d den %d la: ", num1, num2);
        Inrabien(num1, num2);
    } else {
        printf("cac so chia het cho 50 tu %d den %d la: ", num2, num1);
        Inrabien(num2, num1);
    }
    return 0;
}