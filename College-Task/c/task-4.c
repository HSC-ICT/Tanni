// Write a program to find the sum of 1 + 2 + 3 + ... + 100

#include <stdio.h>

int main() {
    int n = 100, sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of 1 + 2 + 3 + ... + %d is: %d\n", n, sum);

return 0;
}