#include <stdio.h>

int main(){
    int arr[3][2];
    int row, collum;
    printf("\nEnter the row: ", row);
    scanf("%d", &row);
    printf("\nEnter the collum: ",collum);
    scanf("%d", &collum);
    for (int i = 0; i < 3 ; ++i) {
        for (int j = 0; j < 2 ; ++j) {
            printf("\nInput arr[%d][%d]: ", i, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}