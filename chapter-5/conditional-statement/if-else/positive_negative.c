// Write a program to check whether a number is positive or negative.
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    if(n > 0){
        printf("The number is positive.\n");
    }
    else if(n < 0){
        printf("The number is negative.\n");
    }
    else if(n == 0){
        printf("The number is zero.\n");
    }else{
        printf("The number is invalid.\n");
    }
return 0;
}