#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20

int main(){
    int Arr[ARRAY_SIZE];
    srand(time(NULL));
    printf("Cac phan tu cua mang:\n");
    for (int i = 0; i < ARRAY_SIZE; i++){
        Arr[i] = rand() % 100;
        printf("%d", Arr[i]);
    }
    printf("\n");
    int num;
    printf("nhap so can kiem tra: ");
    scanf("%d", &num);
    int found = 0;
    for (int i = 0; i < ARRAY_SIZE; i++){
        if (Arr[i] == num){
            found = 1;
            break;
        }
    }
    if (found){
        printf("So %d thuoc mang duoc sinh ngau nhien.\n", num);
    } else{
        printf("so %d khong thuoc mang duoc sinh ra ngau nhien.\n", num);
    }
    return 0;
}