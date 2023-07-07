// find minimum between two numbers

#include <stdio.h>

int min2(int n1, int n2) {
    return n1 < n2 ? n1 : n2;
}

int main(){
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // int ans = min2(n1, n2);
    // printf("Maximum is %d\n", ans);

    printf("Minimum is = %d\n", min2(n1, n2));
    
    return 0;
}