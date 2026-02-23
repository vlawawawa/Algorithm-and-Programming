#include <stdio.h>

int main(){
	
	// Declare
		int N, M, i;
	
	// Input
		scanf ("%d %d", &N, &M);
	
	// Output
		for (i = 0; i < M; i++){
			printf("%d\n", N + i);
		}
	
	
	return 0;
}
