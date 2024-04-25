#include <stdio.h>

int main(){
    int i;
    int arr[10];
    printf("Nhap 10 phan tu cho mang:\n");
    for (i = 0; i < 10; i++){
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int count_max = 1;
    for ( i = 1; i < 10 ; ++i) {
        if(arr[i] > max){
            max = arr[i];
            count_max = 1;
        } else if (arr[i] == max){
            count_max++;
        }
    }
    int min = arr[0];
    int count_min = 1;
    for (i = 1; i < 10; i++){
        if (arr[i] < min){
            min = arr[i];
            count_min = 1;
        } else if (arr[i == min]){
            count_min++;
        }
    }
    int sum = 0;
    for ( i = 0; i < 10 ; ++i) {
        sum += arr[i];
    }
    float average = (float) sum / 10;

    printf("max is %d,time it appear is %d\n", max, count_max);
    printf("min is %d,time it appear is %d\n", min, count_min);
    printf("sum is %d\n", sum);
    printf("average is %.2f\n", average);
    return 0;
}