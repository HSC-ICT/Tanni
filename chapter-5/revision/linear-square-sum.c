// Write a program that can print the sum of this series: 1^2 + 2^2 + 3^2 + 4^2 + .... + n^2 = ?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i * i;

    printf("Sum of this series: 1^2 + 2^2 + 3^2 + 4^2 + .... + %d^2 = %d\n", n, sum);

return 0;
}