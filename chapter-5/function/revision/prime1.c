// check n is a prime number or not

#include <stdio.h>

void prime_checker(int n){
    int i, flag = 0;

    for(i = 2; i < n; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("%d is a prime number\n");
    else printf("%d is not a prime number\n");

    // if(flag) printf("False\n");
    // else printf("True\n");
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime_checker(n);
}



// n = 13
// i = 2, flag = 0

// 2 - n --> 2 - 13
// if(n % i == 0)
// 13 % 2 = 1 --> false

// i = 3
// 3 < 13 --> true
// 13 % 3 = 1 --> false

// i = 4
// 4 < 13 --> true
// 13 % 4 = 1 --> false

// i = 5
// 5 < 13 --> true
// 13 % 5 = 3 --> false

// i = 6
// 6 < 13 --> true
// 13 % 6 = 1 --> false

// i = 7
// 7 < 13 --> true
// 13 % 7 = 6 --> false

// i = 8
// 8 < 13 --> true
// 13 % 8 = 5 --> false

// i = 9
// 9 < 13 --> true
// 13 % 9 = 4 --> false

// i = 10
// 10 < 13 --> true
// 13 % 10 = 3 --> false

// i = 11
// 11 < 13 --> true
// 13 % 11 = 2 --> false

// i = 12
// 12 < 13 --> true
// 13 % 12 = 1 --> false

// i = 13
// 13 < 13 --> false



// n = 8
// i = 2, flag = 0

// 2 - n --> 2 - 8
// if(n % i == 0)
// 8 % 2 = 0 --> true
// break;

