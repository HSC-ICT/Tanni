// Write a program 

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // if (i % 2 == 1) {
        //     printf("%d ", i);
        // }
        if (i % 2 != 0) { // ! =
            printf("%d ", i);
        }
    }

    for(int i = 1; i <= n; i += 2) printf("%d ", i);

    printf("\n");


return 0;
}