// multiplication table

#include <stdio.h>

int main(){
    int n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; ++i) printf("%d * %d = %d\n", n, i, n * i);

    return 0;
}
// 10 * 1 = 10
// 10 * 2 = 20
// 10 * 3 = 30
// 10 * 4 = 40
// 10 * 5 = 50
// 10 * 6 = 60
// 10 * 7 = 70
// 10 * 8 = 80
// 10 * 9 = 90
// 10 * 10 = 100