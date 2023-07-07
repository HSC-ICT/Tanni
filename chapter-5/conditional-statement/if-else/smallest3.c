// Write a program to find the smallest of three numbers using if-else statement.

#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3) printf("%d is the smallest number.\n", n1);
    else if (n2 < n1 && n2 < n3) printf("%d is the smallest number.\n", n2);
    else printf("%d is the smallest number.\n", n3);

return 0;
}
/*
// Logical And Operator
A    B = A && B
0 && 0 = 0
0 && 1 = 0
1 && 0 = 0
1 && 1 = 1
// Logical Or Operator
A    B = A || B
0 || 0 = 0
0 || 1 = 1
1 || 0 = 1
1 || 1 = 1
*/