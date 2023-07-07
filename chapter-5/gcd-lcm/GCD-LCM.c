// calculate gcd and lcm using function where lcm is calculated using gcd

#include <stdio.h>

int gcd(int a, int b){
    int gcd;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int lcm(int a, int b){
    int lcm;
    lcm = (a * b) / gcd(a, b);
    return lcm;
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is = %d\n", a, b, gcd(a, b));
    printf("LCM of %d and %d is = %d\n", a, b, lcm(a, b));

    return 0;
}