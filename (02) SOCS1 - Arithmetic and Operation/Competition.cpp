#include <stdio.h>

int main(){
	
	// Declare
		long long int num1[4], num2[4];
		int a = 0;
	
	// Input
		while(a < 4){
			scanf("%lld %lld", &num1[a], &num2[a]);
				getchar();
		a++;
		}
		
	// Process
		for(int i = 0; i < 4; i++){
			num1[i] *= num2[i];
			
	// Output
			printf("%lld\n", num1[i]);
		}
	
	
	return 0;
}
