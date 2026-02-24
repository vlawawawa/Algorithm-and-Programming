#include <stdio.h>

int main(){
	
	// Declare
		long long int clicks, pointsonspecificclick, totpoints = 0;
		
	// Input
		scanf("%lld", &clicks);
	
	// Process
		for(int i = 0; i < clicks; i++){
			pointsonspecificclick = 100 + 50*i;
			totpoints += pointsonspecificclick;
		} 
		
	// Output
		printf("%lld\n", totpoints);	
		
		
	return 0;
}
