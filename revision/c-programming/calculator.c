#include <stdio.h>

int main(){
    /*
    %d / %i --> int --> -2, 3, 0
    %f --> float --> -2.000000, 3.000000, 0.000000
    %lf --> double --> -2.000000, 3.000000, 0.000000
    %c --> char --> 't', 'a', 'n', 'n', 'i'
    bool --> true, false
    */
    int n1, n2; // initialization
    /*
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    */
    printf("Enter two integer number: ");
    scanf("%d%d", &n1, &n2);
/*
    int sum = n1 + n2;
    int sub = n1 - n2;
    int prod = n1 * n2;
    int div = n1 / n2;
    int rem = n1 % n2;


    printf("Summation = %d\n", n1 + n2);
    printf("Subtration = %d\n", n1 - n2);
    printf("Multiplication = %d\n", n1 * n2);
    printf("Division = %d\n", n1 / n2);
    printf("Remaindar = %d\n", n1 % n2);
*/
    // "+" + '+'
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf("%d %% %d = %d\n", n1, n2, n1 % n2);
}