// Program to find the average of n numbers using arrays

#include <stdio.h>

int main() {
    int i, n, sum = 0;
    double average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int marks[n];

    for(i = 0; i < n; ++i) {
        scanf("%d", &marks[i]);
          
        // adding integers entered by the user to the sum variable
        sum += marks[i];
    }

    // explicitly convert int to double
    // then calculate average
    average = (double) sum / n;

    printf("Average = %.2lf\n", average);

    return 0;
}
