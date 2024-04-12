#include <stdio.h>

int main(){
    int x;
    x = 0;
    printf("hay chon gia dung (1 - 3): ");
    scanf("%d", &x);
    if (x == 1)
        printf("\nChoice is 1");
    else if (x == 2)
        printf("\nChoice is 2");
    else if (x == 3)
        printf("\nChoice is 3");
    else
        printf("\nm chon sai nen van minh r: Invalid Choice");
    return 0;
}