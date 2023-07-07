// Write a program that can convert a small letter to a capital letter.

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a small letter: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        ch -= 32;

    printf("Capital letter = %c\n", ch);

return 0;
}