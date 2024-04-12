#include <stdio.h>

int main(){
    int x, y;
    x = y = 0;
    printf("hay chon nen van minh ( 1 -3): ");
    scanf("%d", &x);
    if(x == 1){
        printf("\nHay chon gia cua y (1 - 5): ");
        scanf("%d",&y);
        if (y <= 5)
            printf("\nValue of y issssss: %d", y);
        else
            printf("\nValue of y exceed 5");
    }
    else
        printf("\nChoice entered was not 1");
    return 0;
}