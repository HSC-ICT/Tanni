// Write a program that can print Bangladesh 12 times

#include <stdio.h>

int main() {
    printf("Enter the value of n: ");

    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += i;

    printf("Sum = %d\n", sum);
        

return 0;
}