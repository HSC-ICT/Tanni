// check prime numbers between 1 to n

#include <stdio.h>

void prime_numbers(int n){
    int i, j, flag = 0;

    for(i = 2; i < n; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0) printf("%d ", i);
        flag = 0;
    }
    printf("\n");
}


int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime_numbers(n);
}

/*
flag = 0


i = 2; i < 100
j = 2; j < 2 --> false


flag = 0 ? --> true --> print 2
flag = 0



i = 3; i < 100
j = 2; j < 3 --> true
i % j == 0 ?
3 % 2 == 0 ? --> false
j = 3; j < 3 --> false

flag = 0 ? --> true --> print 3
flag = 0



i = 4; i < 100 --> true
j = 2; j < 4 --> true

i % j == 0 ?
4 % 2 == 0 ? --> true
flag = 1 --> break

flag = 0 ? --> false
flag = 0

i = 5; i < 100 --> true
j = 2; j < 5 --> true
i % j == 0 ?
5 % 2 == 0 ? --> false

j = 3; j < 5 --> true
i % j == 0 ?
5 % 3 == 0 ? --> false

j = 4; j < 5 --> true
i % j == 0 ?
5 % 4 == 0 ? --> false

j = 5; j < 5 --> false

flag = 0 ? --> true --> print 5
*/