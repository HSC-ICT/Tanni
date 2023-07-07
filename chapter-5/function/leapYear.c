#include <stdio.h>

int isLeapYear(int y){
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);

    int result = isLeapYear(y);

    // (result == 1) ? printf("%d is a leap year.\n", y) : printf("%d is not a leap year.\n", y);

    if(result == 1) printf("%d is a leap year.\n", y);
    else printf("%d is not a leap year.\n", y);
}