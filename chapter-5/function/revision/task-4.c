// find maximum between three numbers

#include <stdio.h>

int max3(int n1, int n2, int n3){
    // if(n1 > n2 && n1 > n3) return n1;
    // else if(n2 > n1 && n2 > n3) return n2;
    // else return n3;

    return (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
}

int main(){
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Maximum number = %d\n", max3(n1, n2, n3));
    
    return 0;
}