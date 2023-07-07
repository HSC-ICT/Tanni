// Write a program 

#include <stdio.h>

int main() {
    // increment
    int i = 1;
    printf("i = %d\n", i);

    i = i + 1; // i++ // i += 1
    printf("i = %d\n", i);
    // i = 1 + 1;
    // i = 2;

    i = i + 1;
    printf("i = %d\n", i);
    // i = 2 + 1;
    // i = 3;

    i = i + 1;
    printf("i = %d\n", i);
    // i = 3 + 1;
    // i = 4;

    // decrement
    int j = 10;
    printf("j = %d\n", j);

    j = j - 1; // j-- // j -= 1
    printf("j = %d\n", j);
    // j = 10 - 1;
    // j = 9;

    j = j - 1;
    printf("j = %d\n", j);
    // j = 9 - 1;
    // j = 8;

    j = j - 1;
    printf("j = %d\n", j);
    // j = 8 - 1;
    // j = 7;

    // Increment and Decrement Operator
    // int k = 1;
    // printf("k = %d\n", k++); // k = 1
    // printf("k = %d\n", k++); // k = 2

    // int k = 1;
    // printf("k = %d\n", ++k); // k = 2
    // printf("k = %d\n", ++k); // k = 3

    // int k = 1;
    // printf("k = %d\n", k--); // k = 1
    // printf("k = %d\n", k--); // k = 0

    // int k = 1;
    // printf("k = %d\n", --k); // k = 0
    // printf("k = %d\n", --k); // k = -1

return 0;
}

// increment have 2 types
// 1) pre-increment ( ++i ) --> imeadiatly increment
// 2) post-increment ( i++ ) --> after use increment

// decrement have 2 types
// 1) pre-decrement ( --i ) --> imeadiatly decrement
// 2) post-decrement ( i-- ) --> after use decrement