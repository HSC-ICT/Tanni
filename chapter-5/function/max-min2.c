// https://www.codechef.com/problems/MAXDIFFMIN

#include <stdio.h>

int max(int x, int y, int z){
    if(x > y && x > z) return x;
    else if(y > x && y > z) return y;
    else return z;
}
int min(int x, int y, int z){
    if(x < y && x < z) return x;
    else if(y < x && y < z) return y;
    else return z;
}

int main(void) {
	int t;
	scanf("%d", &t);
	
	while(t--){
	    int x, y, z;
	    scanf("%d%d%d", &x, &y, &z);
	    
	    int result = max(x, y, z) - min(x, y, z);
	    
	    printf("%d\n", result);
	}
	
	return 0;
}

