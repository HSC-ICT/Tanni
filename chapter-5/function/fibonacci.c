// fibonacci series --> 0 1 1 2 3 5 8 13 21 34 55 89 

#include <stdio.h>

int main() {
    long long first = 0, second = 1, n;

    printf("Enter the number of terms: ");
    scanf("%lld", &n);

    printf("Fibonacci series: %lld %lld ", first, second);

    for (int i = 0; i < n - 2; i++) {
        int next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
    }
    printf("\n");

return 0;
}

/*
first = 0
second = 1

Fibonacci series: 0 1

n = 6

i = 0; i < 6 - 2; 0 < 4 --> true
next = first + second = 0 + 1 = 1
first = second = 1
second = next = 1

i = 1; i < 6 - 2; 1 < 4 --> true
next = first + second = 1 + 1 = 2
first = second = 1
second = next = 2

i = 2; i < 6 - 2; 2 < 4 --> true
next = first + second = 1 + 2 = 3
first = second = 2
second = next = 3

i = 3; i < 6 - 2; 3 < 4 --> true
next = first + second = 2 + 3 = 5
first = second = 3
second = next = 5

i = 4; i < 6 - 2; 4 < 4 --> false
print a new line
*/



Algorithm:
Step-1: Start
Step-2: Declare variables first, second, n
Step-3: Assign first = 0, second = 1
Step-4: Input the value of n
Step-5: print "Fibonacci series: " first, second
Step-6: for (i = 0; i < n - 2; i++)
Step-7: next = first + second
Step-8: print next
Step-9: first = second
Step-10: second = next
Step-11: print a new line
Step-12: Stop


Algorithm:
Step-1: Start
Step-2: Declare variables first, second, n, i
Step-3: Assign first = 0, second = 1, i = 0
Step-4: Input the value of n
Step-5: print "Fibonacci series: " first, second
Step-6: next = first + second
Step-7: print next
Step-8: first = second
Step-9: second = next
Step-10: i = i + 1
Step-11: if (i < n - 2) if true, go to step-6
Step-11: print a new line
Step-12: Stop