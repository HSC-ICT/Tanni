// find maximum between two numbers

#include <stdio.h>

int max2(int n1, int n2) {
    // if(n1 > n2) return n1;
    // else return n2;

    return n1 > n2 ? n1 : n2;

    // (n1 > n2) ? return n1 : return n2;
}

int main(){
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // int ans = max2(n1, n2);
    // printf("Maximum is %d\n", ans);

    printf("Maximum is = %d\n", max2(n1, n2));
    
    return 0;
}