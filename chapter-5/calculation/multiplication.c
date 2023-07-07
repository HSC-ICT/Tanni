#include <stdio.h>
int main(){
    // initialize variables
    int n1, n2, product;
    
    printf("Enter two integer numbers: ");
    scanf("%d%d", &n1, &n2);
    
    /*
    printf("Enter your 1st number: ");
    scanf("%d", &n1);
    printf("Enter your 2nd number: ");
    scanf("%d", &n2);
    */
    
    // calculation
    product = n1 * n2; // modulas
    
    // print the result
    printf("Multiplication = %d", product);
    
    return 0;
}