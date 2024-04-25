#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 30
#define NUM_STUDENT 5

int main(){
    char studentsNames[NUM_STUDENT][MAX_NAME_LENGTH + 1];
    printf("Nhap danh sach ten 5 hoc vien:\n");
    for (int i = 0; i < NUM_STUDENT; i++){
        printf("enter the %d student: ",i + 1);
        fflush(stdin);
        scanf("%30[^\n]s", studentsNames[i]);
    }
    printf("danh sach ten hoc vien:\n");
    for (int i = 0; i < NUM_STUDENT ; ++i) {
        printf("%d. %s\n", i + 1, studentsNames[i]);
    }
    return 0;
}