#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void even_odd(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%d is even\n", number);
    }else{
        printf("%d is odd\n", number);
    }
}

void positive_negative(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("%d is positive\n", number);
    }else if(number < 0){
        printf("%d is negative\n", number);
    }else{
        printf("%d is zero\n", number);
    }
}

void leap_year(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);
}

void grade_calculation(){
    // int mark;
    // printf("Enter your mark: ");
    // scanf("%d", &mark);

    // if(mark > 100 || mark < 0) printf("Invalid mark\n");
    // else if(mark >= 80 && mark <= 100) printf("A+\n");
    // else if(mark >= 70 && mark <= 79) printf("A\n");
    // else if(mark >= 60 && mark <= 69) printf("A-\n");
    // else if(mark >= 50 && mark <= 59) printf("B\n");
    // else if(mark >= 40 && mark <= 49) printf("C\n");
    // else if(mark >= 33 && mark <= 39) printf("D\n");
    // else printf("F\n");

    char input[100];

    printf("Enter your mark: ");
    scanf("%s", input); // 100 --> "974465567\0"

    int i;
    for(i = 0; input[i] != '\0'; i++) {
        if(!isdigit(input[i])) {
            printf("Invalid mark - must be between 0 and 100\n");
            exit(0);
        }
    }

    int marks = atoi(input);
    if(marks >= 0 && marks <= 100){
        if(marks >= 80 && marks <= 100) printf("Your grade is A+\n");
        else if(marks >= 70 && marks <= 79) printf("Your grade is A\n");
        else if(marks >= 60 && marks <= 69) printf("Your grade is A-\n");
        else if(marks >= 50 && marks <= 59) printf("Your grade is B\n");
        else if(marks >= 40 && marks <= 49) printf("Your grade is C\n");
        else if(marks >= 33 && marks <= 39) printf("Your grade is D\n");
        else printf("Your grade is F\n");
    }else printf("Invalid mark - must be between 0 and 100\n");
}

void vowel_consonant(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
    //     printf("%c is a vowel\n", ch);
    // }else{
    //     printf("%c is a consonant\n", ch);
    // }

    // switch(ch){
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //     case 'A':
    //     case 'E':
    //     case 'I':
    //     case 'O':
    //     case 'U':
    //         printf("%c is a vowel\n", ch);
    //         break;
    //     default:
    //         printf("%c is a consonant\n", ch);
    // }

    ch = tolower(ch);

    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? printf("%c is a vowel\n", ch) : printf("%c is a consonant\n", ch);
}

void celsius_fahrenheit(){
    float celsius;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);
}

void fahrenheit_celsius(){
    float fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f fahrenheit = %.2f celsius\n", fahrenheit, celsius);
}

void prime_number(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int i, count = 0;
    for(i = 1; i <= number; i++){
        if(number % i == 0){
            count++;
        }
    }

    if(count == 2){
        printf("%d is a prime number\n", number);
    }else{
        printf("%d is not a prime number\n", number);
    }
}

void factorial(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int i, fact = 1;
    for(i = 1; i <= number; i++){
        fact *= i;
    }

    printf("Factorial of %d! = %d\n", number, fact);
}

void pattern(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
/*
*
**
***
****
*****
*/
}

void largest_number(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) printf("%d is the largest number\n", a);
    else if(b > a && b > c) printf("%d is the largest number\n", b);
    else printf("%d is the largest number\n", c);
}

void smallest_number(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c) printf("%d is the smallest number\n", a);
    else if(b < a && b < c) printf("%d is the smallest number\n", b);
    else printf("%d is the smallest number\n", c);
}

void calculator(){
    char ch;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &ch);

    float n1, n2;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    switch(ch){
        case '+':
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
            break;
        default:
            printf("Invalid operator\n");
    }
}

int main(){
    int choice;
    do{
        printf("\n\n\t\tC Programming Overview Class\t\t\n");
        printf("1. Even Odd Program\n");
        printf("2. Positive Negative Program\n");
        printf("3. Leap Year Program\n");
        printf("4. Grade Program\n");
        printf("5. Vowel Consonant Program\n");
        printf("6. Celsius to Fahrenheit Program\n");
        printf("7. Fahrenheit to Celsius Program\n");
        printf("8. Prime Number Program\n");
        printf("9. Factorial Program\n");
        printf("10. Print a simple pattern\n");
        printf("11. Find the largest number among three numbers\n");
        printf("12. Find the smallest number among three numbers\n");
        printf("13. Use Calculator\n");
        printf("14. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                even_odd();
                break;
            case 2:
                positive_negative();
                break;
            case 3:
                leap_year();
                break;
            case 4:
                grade_calculation();
                break;
            case 5:
                vowel_consonant();
                break;
            case 6:
                celsius_fahrenheit();
                break;
            case 7:
                fahrenheit_celsius();
                break;
            case 8:
                prime_number();
                break;
            case 9:
                factorial();
                break;
            case 10:
                pattern();
                break;
            case 11:
                largest_number();
                break;
            case 12:
                smallest_number();
                break;
            case 13:
                calculator();
                break;
            case 14:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(choice != 14);

    return 0;
}