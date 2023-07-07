// Write a program to find the sum of 1 + 2 + 3 + ... + n

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i;
    }
    // i = 1 --> i <= 10 --> true --> sum = 0 + 1 = 1 --> sum = 1
    // i = 2 --> i <= 10 --> true --> sum = 1 + 2 = 3 --> sum = 3
    // i = 3 --> i <= 10 --> true --> sum = 3 + 3 = 6 --> sum = 6
    // i = 4 --> i <= 10 --> true --> sum = 6 + 4 = 10 --> sum = 10
    // i = 5 --> i <= 10 --> true --> sum = 10 + 5 = 15 --> sum = 15
    // i = 6 --> i <= 10 --> true --> sum = 15 + 6 = 21 --> sum = 21
    // i = 7 --> i <= 10 --> true --> sum = 21 + 7 = 28 --> sum = 28
    // i = 8 --> i <= 10 --> true --> sum = 28 + 8 = 36 --> sum = 36
    // i = 9 --> i <= 10 --> true --> sum = 36 + 9 = 45 --> sum = 45
    // i = 10 --> i <= 10 --> true --> sum = 45 + 10 = 55 --> sum = 55
    // i = 11 --> i <= 10 --> false --> sum = 55
    printf("The sum of 1 + 2 + 3 + ... + %d is: %d\n", n, sum);
return 0;
}