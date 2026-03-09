#include <stdio.h>

int main(){
	
	// Declare
		long long int num[4];

	// Input
		scanf("%lld %lld %lld %lld", &num[0], &num[1], &num[2], &num[3]);
	
	// Process
		if((num[0] * num[1]) == (num[2] - num[3])){
			
	// Output
			printf("True\n");
		} else{
			printf("False\n");
		}
	
	
	
	return 0;
}
