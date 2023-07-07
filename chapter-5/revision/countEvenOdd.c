// count the number of even and odd numbers in an array

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int even = 0, odd = 0;

    for(int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            even++; // even = even + 1
        else
            odd++; // odd = odd + 1
    }

    printf("Even = %d, Odd = %d\n", even, odd);

return 0;
}