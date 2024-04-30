#include "stdio.h"

int main(){
    int i, j, h;
    printf("hutao want u to enter number of collum: ");
    scanf("%d", &h);
    for (int i = 0; i <= h ; ++i){
        for (int j = 0; j < i ; ++j) {
            printf("*");
        }
        printf("\n");
    }

}