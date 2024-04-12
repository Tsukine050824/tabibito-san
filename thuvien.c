#include <stdio.h>

int main() {
    int num, res;
    printf("enter a number: ");
    scanf("%d", &num);
    res = num % 2;
    if (res == 0)
        printf("hoa");
    else
        printf("khong hoa nhau r :DDDD");
    return 0;
}
