#include <stdio.h>

int main (){
    char c;
    printf("hay dien 1 nhan vat nao do :vvvvv: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("ki tu thuong: %c", c + 'a' - 'A');
    else
        printf("k co dau do ngoc :DDD = %c", c);
}