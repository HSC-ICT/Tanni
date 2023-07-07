// even odd program

#include <stdio.h>

int checkEvenOdd(int n){
	if(n % 2 == 0) return 1;
	else return 0;
}

int main(){
	int n;
	
	printf("Enter any integer number: ");
	scanf("%d", &n);
	
	int result = checkEvenOdd(n);
	
	if(result == 1) printf("Even\n");
	else printf("Odd\n");
	
	return 0;
}
