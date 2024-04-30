#include "stdio.h"

void drawRectangle(int row, int col);
void drawTriangle(int row);
void printMenu1();

int main(){
    int row = 9;
    int col = 8;
    printMenu1();
    drawRectangle(5, 4);
    drawTriangle(7);
    drawRectangle(row, col);
    drawTriangle(5);
    drawTriangle(5);
    return 0;
}

void drawRectangle(int row, int col){
    printf("\nDraw rectangle with col and row");
    for (int i = 0; i < row ; ++i) {
        printf("\n");
        for (int j = 0; j < col ; ++j){
            printf("*");
        }
    }
    printf("\n");
}
void drawTriangle(int row){
    printf("Draw Triangle");
    for (int i = 0; i < row ; ++i) {
        printf("\n");
        for (int j = 0; j <= i ; ++j) {
            printf("*");
        }
    }
}

void printMenu1(){
    printf("Welcome to shop!\n");
    printf("Welcome to shop!\n");
    printf("Welcome to shop!\n");
    printf("Welcome to shop!\n");
    printf("Welcome to shop!\n");
}