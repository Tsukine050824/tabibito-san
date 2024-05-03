#include "stdio.h"

int adder(int a, int b){
    int c;
    c = a + b;
    a *= a;
    b += 5;
    printf("\n\na & b within adder funtion are: %d, %d", a, b);
    printf("\nc within adder funtion is: %d", c);
    return (c);
}
int main(){
    int a, b, c;
    a = b = c = 0;
    printf("\nEnter the 1st intenger: ");
    scanf("%d", &a);
    printf("\nEnter 2nd integer: ");
    scanf("%d", &b);
    c = adder(a, b);
    printf("\n\na & b in main() are: %d, % d", a, b);
    printf("\n\nc in main() is : %d", c);
}
