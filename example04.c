#include "stdio.h"

int Maxelement(int arr[], int n){
    int maxElement = arr[0];
    for (int i = 1; i < n ; ++i) {
        if (arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int Minelement(int arr[], int n){
    int minElement = arr[0];
    for (int i = 1; i < n ; ++i) {
        if (arr[i] < minElement){
            minElement = arr[i];
        }
    }
    return minElement;
}

int main(){
    int n;
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nNhap cac phan tu cua mang:\n");
    for (int i = 0; i < n ; ++i) {
        printf("Phan tu %d:\t", i + 1);
        scanf("%d", &arr[i]);
    }
    int maxElement = Maxelement(arr, n);
    int minElement = Minelement(arr, n);
    printf("Gia tri lon nhat trong mang: %d\n",maxElement);
    printf("Gia tri nho nhat trong mang: %d\n",minElement);
    return 0;
}

