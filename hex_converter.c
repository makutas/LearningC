#include <stdio.h>

int main(void) {
    printf("Welcome to hexadecimal converter!\n");
    printf("Type in a number (int) to convert it to hexadecimal value:\n");

    int num;
    scanf("%d", &num);
    printf("Decimal representation of your number:     %9d\n", num);
    printf("Hexadecimal representation of your number: %9X\n", num);

    return 0;
}