// Write a program that can print the sum of this series: 1^1 + 2^2 + 3^3 + 4^4 + .... + n^n = ?

#include <stdio.h>
#include <math.h>

int main() {
    long long n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%lld", &n);

    for(int i = 1; i <= n; i++)
        sum += pow(i, i);

    printf("Sum of this series: 1^1 + 2^2 + 3^3 + 4^4 + .... + %lld^%lld = %lld\n", n, n, sum);

return 0;
}