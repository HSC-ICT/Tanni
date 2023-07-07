// 2^4 + 4^4 + 6^4 + ... + 100^4

#include <stdio.h>

int main(){
    int i;
    int sum = 0;
    for (i = 2; i <= 100; i += 2) {
        sum = sum + i * i * i * i;
    }
    printf("sum = %d\n", sum);
}