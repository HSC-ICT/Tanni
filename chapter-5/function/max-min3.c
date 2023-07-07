// https://www.codechef.com/problems/MAXDIFFMIN

#include <stdio.h>

int max(int x, int y){
    if(x > y) return x;
    else return y;
}
int min(int x, int y){
    if(x < y) return x;
    else return y;
}

int main(void) {
	int t;
	scanf("%d", &t);
	
	while(t--){
	    int x, y, z;
	    scanf("%d%d%d", &x, &y, &z);
	    
	    int result = max(max(x, y), z) - min(min(x, y), z);
	   // max(max(x, y), z)
	   // x = 3, y = 2, z = 1
	   // max(max(3, 2), 1)
	   // max(3, 1) = 3
	    
	    printf("%d\n", result);
	}
	
	return 0;
}

