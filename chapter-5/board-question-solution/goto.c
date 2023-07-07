// 10, 20, 30, ... , 100 using goto statement.

#include <stdio.h>

int main() {
    int i;


    // using for loop
    for(i = 10; i <= 100; i += 10){
        printf("%d\n", i);
    }

    // using goto
    i = 10;
    start:
        printf("%d\n", i);
        i += 10;
        if(i <= 100){
            goto start;
        }
return 0;
}