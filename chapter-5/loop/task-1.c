// 1^3 + 3^3 + 5^3 + ... + 99^3

#include <stdio.h>
int main(){
    int i;
    int sum = 0;
    for (i = 1; i <= 99; i += 2) {
        sum = sum + i * i * i;
    }
    printf("sum = %d\n", sum);
    return 0;
}