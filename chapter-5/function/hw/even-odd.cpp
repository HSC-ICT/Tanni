// even odd program

#include <iostream>
using namespace std;

int checkEvenOdd(int n){
	if(n % 2 == 0) return 1;
	else return 0;
}

int main(){
	int n;
	
	cout << "Enter any integer number: ";
	cin >> n;
	
	int result = checkEvenOdd(n);
	
	if(result == 1) cout << "Even\n";
	else cout << "Odd\n";
	
	return 0;
}
