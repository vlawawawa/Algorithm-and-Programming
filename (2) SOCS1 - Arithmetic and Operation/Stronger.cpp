#include <stdio.h>

int main(){
	
	// Declare
		int numhit, totdmgperhit;
		long long int totdmg = 0;
		
	// Input
		scanf("%d", &numhit);
	
	// Process
		for(int i = 0; i < numhit; i++){
			totdmgperhit = 100 + 50*i;
			totdmg += totdmgperhit;
		} 
		
	// Output
		printf("%lld\n", totdmg);	
		
		
	return 0;
}
