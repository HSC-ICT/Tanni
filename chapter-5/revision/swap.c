// a = 5
// b = 10

// a, b = b, a
// 5, 10 = 10, 5

// a = 10
// b = 5

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}