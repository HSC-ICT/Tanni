// guessing game

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    if(n == 2){
        printf("Hurrah! Nice Guess\n");
    }
    else if(n == 5){
        printf("Hurrah! Nice Guess\n");
    }
    else{
        printf("Sorry! You have entered wrong number.\n");
    }

return 0;
}