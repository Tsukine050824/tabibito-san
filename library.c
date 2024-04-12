#include <stdio.h>

int main(){
    int year;
    printf("\ndien nam vao di onegai:");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    printf("\n%d la nam nhuan do!", year);
    return 0;
}
