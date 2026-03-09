#include <stdio.h>

int main(){
	
	// Declare
		int numcage, a = 0, anmtot = 0;
		
	// Input
		scanf("%d", &numcage);
			int animal[numcage];
		while(a < numcage){
			scanf("%d", &animal[a]);
		a++;
		}			
	
	// Process
		for(int i = 0; i < numcage; i++){
			anmtot += animal[i];
		}
	
	// Output
	printf("%d\n", anmtot);
	
	
	return 0;
}
