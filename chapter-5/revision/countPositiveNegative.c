// count the number of positive and negative numbers in an array

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, -7, -8, -9, -10};

    int positive = 0, negative = 0;

    for(int i = 0; i < 10; i++) {
        if (arr[i] > 0)
            positive++; // positive = positive + 1
        else
            negative++; // negative = negative + 1
    }

    printf("Positive = %d, Negative = %d\n", positive, negative);

return 0;
}