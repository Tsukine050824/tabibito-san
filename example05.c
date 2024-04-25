#include <stdio.h>

int main(){
    int i;
    int arr[10];
    printf("Nhap 10 phan tu cho mang:\n");
    for ( i = 0; i < 10; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("cac phan tu o vi tri chan la:\n");
    for (i = 0; i < 10; i +=2){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}