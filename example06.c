#include <stdio.h>

int main(){
    int arr[5];
    float brr[10] = {0};
    printf("nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++){
        printf("nhap so thu tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++){
        brr[i] = (float)arr[i];
    }

    printf("cac phan tu cua mang arr:\n");
    for (int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("Cac phan tu cua brr la:\n");
    for (int i = 0; i < 10 ; ++i) {
        printf("%.2f", brr[i]);
    }
    printf("\n");
    return 0;
}