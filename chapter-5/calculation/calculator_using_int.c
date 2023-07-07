// Create a basic calculator using c programming

/*
Summation = 5 + 3 = 8
Subtraction = 5 - 3 = 2
Multiplication = 5 * 3 = 15
Division = 5 / 3 = 1
Modulas = 5 % 3 = 2
*/
#include <stdio.h>
int main(){
    // initialize variables
    int n1, n2, sum, sub, prod, div, mod;

    // input
    printf("Enter two integer numbers: ");
    scanf("%d%d", &n1, &n2);

    // calculation
    sum = n1 + n2; // summation
    sub = n1 - n2; // subtraction
    prod = n1 * n2; // multiplication
    div = n1 / n2; // division
    mod = n1 % n2; // modulas

    // print the result
    printf("Summation = %d + %d = %d\n", n1, n2, sum);
    printf("Subtraction = %d - %d = %d\n", n1, n2, sub);
    printf("Multiplication = %d * %d = %d\n", n1, n2, prod);
    printf("Division = %d / %d = %d\n", n1, n2, div);
    printf("Modulas = %d %% %d = %d\n", n1, n2, mod);

    return 0;
}