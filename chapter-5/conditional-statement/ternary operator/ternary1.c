// largest number between 3 numbers using ternary operator

#include<stdio.h>
int main(){

    int a = 10, b = 20, largest;

    largest = (a > b) ? a : b;
    // largest = (10 > 20) ? 10 : 20;

    printf("%d\n", largest);

    return 0;
}