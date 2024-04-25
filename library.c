#include <stdio.h>

int main(){
    int i, total, high;
    int ary[10];
    for (int i = 0; i < 10; i++){
        printf("\nEnter value: %d: ", i + 1);
        scanf("%d", &ary[i]);
    }
    high = ary[0];
    for (i = 1; i < 10; i++){
        if (ary[i] > high)
            high = ary[i];
    }
    printf("\n highest value entered was %d",high);
    for (i = 0, total = 0; i < 10; i++)
        total = total + ary[i];
    printf("\nthe average of value entered for ary is %d", total/i);
    return 0;
}