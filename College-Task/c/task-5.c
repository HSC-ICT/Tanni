// Write a program to find the sum of 1 + 3 + 5 + ... + 99

#include <stdio.h>

int main() {
    int n = 99, sum = 0;

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("The sum of 1 + 3 + 5 + ... + %d is: %d\n", n, sum);

return 0;
}