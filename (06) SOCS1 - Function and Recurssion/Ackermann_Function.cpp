#include <stdio.h>

int a(int m, int n){
	
	if(m == 0)
		return n + 1;
	
	if(m > 0 && n == 0)
		return a(m - 1, 1);
	else if(m > 0 && n > 0)
		return a(m - 1, a(m, n - 1));
}

int main(){
	
	// Declare
		int m, n, res;
		
	// Input
		scanf("%d %d", &m, &n);
	
	// Process
		res = a(m, n);
	
	// Output
		printf("result: %d\n", res);
	
	
	return 0;
}
