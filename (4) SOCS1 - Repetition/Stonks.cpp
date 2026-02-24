#include <stdio.h>

int main(){
	
	// Declare
		int numstocks;
		
	// Input
		scanf("%d", &numstocks);
			long long stocks[numstocks], profit = 0;
		for(int i = 0; i < numstocks; i++){
			scanf("%lld", &stocks[i]);
		}
	
	// Process
		for(int i = 0; i < numstocks; i++){
			if(stocks[i] <= 0){
				continue;
			}
			profit += stocks[i];
		}
	
	// Output
		printf("%lld\n", profit);
	
	
	return 0;
}
