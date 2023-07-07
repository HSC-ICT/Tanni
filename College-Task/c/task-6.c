// Write a program to find the sum of 1^2 + 2^2 + 3^2 + ... + 100^2

#include <stdio.h>

int main() {
    int n = 10, sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * i; // sum = sum + i * i;
    }

    // i = 1 --> i <= 10 --> true --> sum = 0 + 1 * 1 = 1 --> sum = 1
    // i = 2 --> i <= 10 --> true --> sum = 1 + 2 * 2 = 5 --> sum = 5
    // i = 3 --> i <= 10 --> true --> sum = 5 + 3 * 3 = 14 --> sum = 14
    // i = 4 --> i <= 10 --> true --> sum = 14 + 4 * 4 = 30 --> sum = 30
    // i = 5 --> i <= 10 --> true --> sum = 30 + 5 * 5 = 55 --> sum = 55
    // i = 6 --> i <= 10 --> true --> sum = 55 + 6 * 6 = 91 --> sum = 91
    // i = 7 --> i <= 10 --> true --> sum = 91 + 7 * 7 = 140 --> sum = 140
    // i = 8 --> i <= 10 --> true --> sum = 140 + 8 * 8 = 204 --> sum = 204
    // i = 9 --> i <= 10 --> true --> sum = 204 + 9 * 9 = 285 --> sum = 285
    // i = 10 --> i <= 10 --> true --> sum = 285 + 10 * 10 = 385 --> sum = 385
    // i = 11 --> i <= 10 --> false --> sum = 385

    printf("The sum of 1^2 + 2^2 + 3^2 + ... + %d^2 is: %d\n", n, sum);

return 0;
}