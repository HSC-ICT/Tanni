// Write a program 

#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    // switch(mark){
    //     case 1:
    //         printf("Failed\n");
    //         break;
    //     case 2:
    //         printf("Failed\n");
    //         break;
    //     ....................
    //     ...................
    //     case 32:
    //         printf("Failed\n");
    //         break;
    //     case 33:
    //         printf("Grade = D\n");
    //         break;
    //     ..........................
    //     .........................
    //     cawe 39:
    //         printf("Grade = D\n");
    //         break;
    //     case 40:
    //         printf("Grade = C\n");
    //         break;
    //     .......................
    //     .......................
    //     case 49:
    //         printf("Grade = C\n");
    //         break;
    //     case 50:
    //         printf("Grade = B\n");
    //         break;
    // }

    switch(mark <= 100 && mark >= 0){
        case 1:
            switch(mark / 10){
                case 10:
                case 9:
                case 8:
                    printf("Grade = A+\n");
                    break;
                case 7:
                    printf("Grade = A\n");
                    break;
                case 6:
                    printf("Grade = A-\n");
                    break;
                case 5:
                    printf("Grade = B\n");
                    break;
                case 4:
                    printf("Grade = C\n");
                    break;
                case 3:
                    switch(mark >= 33){
                        case 0:
                            printf("You failed.\n");
                            break;
                        case 1:
                            printf("You got D\n");
                            break;
                    }
                    break;
                case 2:
                case 1:
                case 0:
                    printf("You failed\n");
                    break;
            }
            break;
        case 0:
            printf("Invalid mark\n");
            break;
    }

    // something new in my life
    // switch(mark){
    //     case 80 ... 100:
    //         printf("Grade A+\n");
    //         break;
    //     case 70 ... 79:
    //         printf("Grade A\n");
    //         break;
    //     default:
    //         printf("Invalid mark!\n");
    // }


return 0;
}