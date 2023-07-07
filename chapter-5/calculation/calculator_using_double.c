// Create a basic calculator using c programming

/*
Summation = 4.30 + 5.70 = 10.00
Subtraction = 4.30 - 5.70 = -1.40
Multiplication = 4.30 * 5.70 = 24.51
Division = 4.30 / 5.70 = 0.75
*/

#include <stdio.h>
int main(){
    // initialize variables
    double n1, n2;
    // double n1, n2, sum, sub, prod, div;

    // input
    printf("Enter two integer numbers: ");
    scanf("%lf%lf", &n1, &n2);

/*
    // calculation
    sum = n1 + n2; // summation
    sub = n1 - n2; // subtraction
    prod = n1 * n2; // multiplication
    div = n1 / n2; // division
*/
    // print the result
    printf("Summation = %.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
    printf("Subtraction = %.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
    printf("Multiplication = %.2lf * %.2lf = %.2lf\n", n1, n2, n1 * n2);
    printf("Division = %.2lf / %.2lf = %.2lf\n", n1, n2, n1 / n2);

    return 0;
}