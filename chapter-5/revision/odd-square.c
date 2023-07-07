// Write a program that can print the sum of this series: 1^2 + 3^2 + 5^2 + 7^2 + ... + n^2 = ?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i += 2)
        sum += i * i;

    printf("Sum of this series: 1^2 + 3^2 + 5^2 + 7^2 + ... + %d^2 = %d\n", n, sum);

return 0;
}