// Write a program 
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    for(int i = 0; i < n; i += 2) { // i = i + 2
        printf("%d ", i);
    }
    // i += 1 --> i = i + 1
    // i -= 1 --> i = i - 1
    // i *= 1 --> i = i * 1
    // i /= 1 --> i = i / 1
    // i %= 1 --> i = i % 1

    // i += 2 --> i = i + 2
    // i -= 2 --> i = i - 2
    // i *= 2 --> i = i * 2
    // i /= 2 --> i = i / 2
    // i %= 2 --> i = i % 2
    printf("\n");
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 == 0) {
    //         printf("%d is even\n", i);
    //     }
    // }
return 0;
}