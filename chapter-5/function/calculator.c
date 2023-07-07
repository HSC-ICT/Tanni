// building a calculator using c programming language
// our calculator will be able to perform the following operations
// addition, subtraction, multiplication, division, modulus, power, factorial, square root, cube root, logarithm, trigonometric functions

#include <stdio.h>
#include <math.h>

int fact(int n){
    int ans = 1;
    // 5! = 5*4*3*2*1 = 120
    for(int i = n; i >= 1; i--){
        ans *= i;
    }
    /*
        i = 5 --> 5 >= 1 --> true --> ans = 1 * 5 = 5
        i = 4 --> 4 >= 1 --> true --> ans = 5 * 4 = 20
        i = 3 --> 3 >= 1 --> true --> ans = 20 * 3 = 60
        i = 2 --> 2 >= 1 --> true --> ans = 60 * 2 = 120
        i = 1 --> 1 >= 1 --> true --> ans = 120 * 1 = 120
        i = 0 --> 0 >= 1 --> false --> exit loop
    */
    return ans;
}
int power(int m, int n){
    // calculate power of m to n
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= m;
    }
    return ans;
}

int main(){
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("Summation: %d + %d = %d\n", a, b, a+b);
    printf("Subtraction: %d - %d = %d\n", a, b, a-b);
    printf("Multiplication: %d * %d = %d\n", a, b, a*b);
    printf("Division: %d / %d = %d\n", a, b, a/b);
    printf("Modulus: %d %% %d = %d\n", a, b, a%b);
    printf("Power: %d ^ %d = %d\n", a, b, power(a, b));
    printf("Factorial: %d! = %d\n", a, fact(a));
    printf("Square root: √(%d) = %f\n", a, sqrt(a));
    printf("Cube root: ∛(%d) = %f\n", a, cbrt(a));
    printf("Logarithm: log(%d) = %f\n", a, log(a));
    printf("Trigonometric functions: sin(%d) = %f, cos(%d) = %f, tan(%d) = %f\n", a, sin(a), a, cos(a), a, tan(a));

    return 0;
}