#include <stdio.h>

int main(){
    // =, ==, +=, -=, *=, /=, %=, ++, --

    // = --> assignment operator
    int a = 5;
    printf("%d\n", a);

    // == --> comparision operator
    bool ans = 5 == 4;
    printf("%d\n", ans);

    // a = 2
    // += --> a = a + 3      a += 3
    //          = 2 + 3
    //          = 5

    // b = 3
    // -= --> b = b - 5      b -= 5
    //          = 3 - 5
    //          = -2


    /*
    x++ / x = x + 1 / x += 1 (post increment)
    ++x / x = x + 1 / x += 1 (pre increment)
    x-- / x = x - 1 / x -= 1 (post decrement)
    --x / x = x - 1 / x -= 1 (pre decrement)
    */
    int x = 7;
    printf("%d\n", x++); // 7 x = x + 1 = 7 + 1 = 8
    printf("%d\n", x++); // 8 x = x + 1 = 8 + 1 = 9 
    printf("%d\n", x); // 9

    int y = 3;
    printf("%d\n", ++y); // 4 y = y + 1 = 3 + 1 = 4

    int p = 1, q = 11;
    printf("%d\n", p--); // 1 p = p - 1 = 1 - 1 = 0
    printf("%d\n", p);

    printf("%d\n", --q); // 10 q = q - 1 = 11 - 1 = 10
    printf("%d\n", q);

    // ++, -- pore thake --> value pore update hoy (post)
    // ++, -- age thake --> value age update hoy (pre)
}