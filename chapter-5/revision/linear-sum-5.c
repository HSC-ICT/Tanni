// Write a program that can print the sum of this series: 1^5 + 2^5 + 3^5 + 4^5 + .... + n^5 = ?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i * i * i * i * i;

    printf("Sum of this series: 1^5 + 2^5 + 3^5 + 4^5 + .... + %d^5 = %d\n", n, sum);

return 0;
}