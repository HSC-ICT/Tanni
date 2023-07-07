// Write a program that can print the sum of this series: 1 + 1/2^2 + 1/3^2 + 1/4^2 + .... + 1/n^2 = ?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += 1 / (i * i);

    printf("Sum of this series: 1 + 1/2^2 + 1/3^2 + 1/4^2 + .... + 1/%d^2 = %d\n", n, sum);

return 0;
}