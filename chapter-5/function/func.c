#include <stdio.h>

float f(float x){
    float m = 4 * x + 1;
    float n = 4 * x - 1;

    return m / n;
}

int main(){
    float result1 = f(-1);
    float result2 = f(0.5);

    printf("f(-1) = %.2f\n", result1);
    printf("f(0.5) = %.2f\n", result2);
    return 0;
}