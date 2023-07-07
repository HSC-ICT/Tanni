#include <stdio.h>

int main(){
    // program for calculate lcm of two numbers
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            lcm = (a * b) / i;
        }
    }
    printf("LCM of %d and %d is = %d\n", a, b, lcm);

    return 0;
}