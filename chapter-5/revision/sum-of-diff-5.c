// Write a program that can print the sum of this series: 5 + 10 + 15 + 20 + .... + n = ?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 5; i <= n; i += 5)
        sum += i;

    printf("Sum of this series: 5 + 10 + .... + %d = %d\n", n, sum);

return 0;
}