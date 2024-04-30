#include "stdio.h"

int peformOperation(int num1, int num2, char operator){
    int result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            result = 0;
    }
    return result;
}

int main(){
    int num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter the operator(+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter the 2nd number: ");
    scanf("%d", &num2);
    int result = peformOperation(num1, num2, operator);
    printf("Result: %d\n", result);

    return 0;
}