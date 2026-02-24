#include <stdio.h>

int main(){
	
	// Declare
		int N, M;
	
	// Input
		scanf ("%d %d", &N, &M);
	
	// Output
		for (int i = 0; i <= M; ++i){
			printf("%d\n", N + i);
		}
	
	
	return 0;
}
