// https://www.codechef.com/problems/MAXDIFFMIN

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	
	while(t--){
	    int x, y, z;
	    scanf("%d%d%d", &x, &y, &z);
	    
	    int max, min;
	    if(x > y && x > z) max = x;
	    else if(y > x && y > z) max = y;
	    else max = z;
	    
	    if(x < y && x < z) min = x;
	    else if(y < x && y < z) min = y;
	    else min = z;
	    
	    printf("%d\n", max - min);
	}
	
	return 0;
}

