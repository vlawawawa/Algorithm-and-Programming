#include <stdio.h>

int main(){
	
	// Declare
		long long int num[3], res = 1;
	
	// Input
		scanf("%lld %lld %lld", &num[0], &num[1], &num[2]);
	
	// Process
		for(int i = 0; i < 3; i++){
			res  *= num[i];
		}
	
	// Output
		printf("%lld\n", res);
		
	
	return 0;
}
