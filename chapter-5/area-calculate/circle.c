// Write a program to calculate the area of a circle
#include <stdio.h>

int main() {
    int r = 2;
    double const pi = 3.1416;

    printf("The radius of the circle is: ");
    scanf("%d", &r);

    printf("The area of the circle is: %f\n", pi * r * r);
return 0;
}