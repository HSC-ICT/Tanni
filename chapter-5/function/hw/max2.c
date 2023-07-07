// find maximum between two numbers

#include<stdio.h>

int max2(int x, int y){
	if(x > y) return x;
	else return y;
}

int main() {

    int n1, n2;
    
    printf("Enter two integer numbers: ");
    scanf("%d%d", &n1, &n2);
    
    int result = max2(n1, n2);
    
    printf("%d\n", result);

    return 0;
}
