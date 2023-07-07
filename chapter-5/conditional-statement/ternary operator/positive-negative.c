// Write a program positive-negative.c to check whether a number is positive or negative using ternary operator.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // zero = non negative number
    (num >= 0) ? printf("Positive\n") : printf("Negative\n");

return 0;
}