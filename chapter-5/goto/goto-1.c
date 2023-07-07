// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>

int main() {
   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= maxInput; ++i) {
    printf("%d. Enter a number: ", i);
    scanf("%lf", &number);
      
    // go to jump if the user enters a negative number
    if (number < 0.0) {
        goto jump;
    }
    sum += number; // sum = sum + number;
   }

jump:
    average = sum / (i - 1);
    printf("Sum = %.2lf\n", sum);
    printf("Average = %.2lf\n", average);

   return 0;
}

// int i = 1;
// i = 2;
// i = 10

// const int i = 1;
// i = 2; // error

// const float PI = 3.1416;
// PI = 3.14; // error