// while vs do-while loop

#include <stdio.h>

int main(void){
    // while loop basic
    int i = 10;

    while (i < 10){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do while loop basic
    int j = 10;
    do{
        printf("%d ", j);
        j++;
    } while (j < 10);
    printf("\n");

    return 0;
}