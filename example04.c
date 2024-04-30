#include "stdio.h"

int isEven(int num){
    return num % 2 == 0;
}
int main(){
    int number;
    printf("emter your number: ");
    scanf("%d", &number);
    if(isEven(number))
        printf("%d la so chan.\n", number);
    else
        printf("%d la so le.\n", number);
    return 0;
}