// Write a program that can calculate the factorial of a number

#include <stdio.h>

int main() {
    printf("Enter the value of n: ");

    int n;
    scanf("%d", &n);

    int factorial = 1;
    for(int i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial = %d\n", factorial);

return 0;
}

// 5! = 5 * 4 * 3 * 2 * 1 = 120