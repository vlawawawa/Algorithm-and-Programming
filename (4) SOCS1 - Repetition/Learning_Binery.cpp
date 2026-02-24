#include <stdio.h>

int main(){
	
	// Declare
		int T;
		
	// Input
		scanf("%d", &T);
			long long int num[T], res[T], sqr[T];
		for(int i = 0; i < T; i++){
			scanf("%lld %lld", &num[i], &sqr[i]);	
			getchar();
		}
	
	// Process
		for(int i = 0; i < T; i++){
			res[i] = num[i] >> sqr[i];
		}
		
	// Output
		for(int i = 0; i < T; i++){
			printf("%lld\n", res[i] % 2);
		}
	
	
	return 0;
}
