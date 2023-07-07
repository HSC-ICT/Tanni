// Write a program that can convert a capital letter to a small letter.

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a capital letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        ch += 32;

    printf("Small letter = %c\n", ch);

return 0;
}