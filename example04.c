#include <stdio.h>

int main(){
    int ary[3][4] ={
            {1, 2, 3, 8},
            {4, 5, 6, 7},
            {7, 8, 9, 10}
    };
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++)
            printf(" %d ", ary[i][j]);
    }
    return 0;
}