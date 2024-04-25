#include <stdio.h>

int main(){
    char characters[10];
    int i = 0;
    printf("Nhap toi da 10 ki tu:\n");
    while (i < 10){
        char c = getchar();
        if (c == '\n'){
            break;
        }
        characters[i] = c;
        i++;
    }
    printf("Danh sac ki tu da nhap va ma ASCII tuong ung:\n");
    for (int j = 0; j < i ; ++j) {
        printf("%c: %d\n", characters[j], characters[j]);
    }
    return 0;
}