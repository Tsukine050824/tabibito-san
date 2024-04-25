#include <stdio.h>

int main(){
    char ary[6];
    int i;
    printf("\n Enter string: ");
    scanf("%[^\n]s", &ary);
    printf("\n the string is %s \n\n", ary);
    for (i = 0; i <= 5; i++)
        printf("\t%d", ary[i]);
    return 0;
}