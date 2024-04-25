#include <stdio.h>

int main() {
    int arr[5];
    printf("nhap 5 so nguyen to de tao mang:\n");
    for (int i = 0; i < 5;) {
        int num;
        printf("nhap do thu %d: ", i + 1);
        scanf("%d", &num);

        int is_prime = 1;
        if (num < 2) {
            is_prime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime) {
            arr[i] = num;
            i++;
        } else {
            printf("so ban nhap k phai la so nguyen to.Enter it again.\n");
        }
    }
    printf("cac phan tu cua mang la:");
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    int max = arr[0], min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("phan tu lon nhat trong mang la: %d\n", max);
    printf("phan tu nho nhat trong mang la: %d\n", min);
    return 0;
}