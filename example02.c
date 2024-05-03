#include "stdio.h"
#include "math.h"

int squarer(int x){
    int j;
    j = x * x;
    return j;
}

int main(){
    int i;
    for ( i = 0; i <= 10 ; ++i) {
        printf("\nSquare of %d is %d", i, squarer(i));
    }
}