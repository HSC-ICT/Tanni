// Write a program to calculate the area of a triangle

#include <stdio.h>

int main() {
    int base, height;

    // printf("Enter the base of the triangle: ");
    // scanf("%d", &base);
    // printf("Enter the height of the triangle: ");
    // scanf("%d", &height);

    printf("Enter the base and height of the triangle: ");
    scanf("%d %d", &base, &height);

    printf("The area of the triangle is: %.2f\n", 0.5 * base * height);

return 0;
}