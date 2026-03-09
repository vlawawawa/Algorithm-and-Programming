#include <stdio.h>

int main(){
	
	// Declare
		long long int num1[3], num2[3], num3[3], num4[3], result[3];
		int a = 0;
	
	// Input
		while(a < 3){
			scanf("(%lld+%lld)x(%lld-%lld)", &num1[a], &num2[a], &num3[a], &num4[a]);	
				getchar();
		a++;
		}
	
	// Process
		for(int i = 0; i < 3; i++){
			result[i] = (num1[i] + num2[i]) * (num3[i] - num4[i]);
		}
		
	// Output
		printf("%lld %lld %lld\n", result[0], result[1], result[2]);	
	
	return 0;
}
