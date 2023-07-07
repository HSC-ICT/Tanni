// Write a program to calculate the grade of a student based on the marks.

#include <stdio.h>

int main() {
    float marks;

    printf("Enter the marks: ");
    scanf("%f", &marks);

    if(marks >= 80 && marks <= 100) printf("Grade A+\n");
    else if(marks >= 70 && marks < 80) printf("Grade A\n");
    else if(marks >= 60 && marks < 70) printf("Grade A-\n");
    else if(marks >= 50 && marks < 60) printf("Grade B\n");
    else if(marks >= 40 && marks < 50) printf("Grade C\n");
    else if(marks >= 33 && marks < 40) printf("Grade D\n");
    else if(marks >= 0 && marks < 33) printf("Grade F\n");
    else printf("Invalid marks!\n");

    if(marks >= 0 && marks <= 100){
        if(marks >= 80) printf("Grade A+\n");
        else if(marks >= 70) printf("Grade A\n");
        else if(marks >= 60) printf("Grade A-\n");
        else if(marks >= 50) printf("Grade B\n");
        else if(marks >= 40) printf("Grade C\n");
        else if(marks >= 33) printf("Grade D\n");
        else printf("Grade F\n");
    } else printf("Invalid marks!\n");
return 0;
}