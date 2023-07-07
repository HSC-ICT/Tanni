// factorial program

#include <stdio.h>

// allowed
// >=
// <=

// not allowed
// =>
// =<
// calculate factorial
// 5! = 5 * 4 * 3 * 2 * 1 = 120
int calcFact(int n){ // receiving value --> parameter
	int fact = 1;
	for(int i = n; i >= 1; i--){
		fact *= i; // fact = 1 * 5 = 5, fact = 5 * 4 = 20, fact = 20 * 3 = 60, fact = 60 * 2 = 120, fact = 120 * 1 = 120
	}
	return fact;
}

int main(){
	int n;
	
	printf("Enter any integer number: ");
	scanf("%d", &n);
	
	int result = calcFact(n); // passing value --> argument
	
	printf("%d\n", result);
	
	return 0;
}
