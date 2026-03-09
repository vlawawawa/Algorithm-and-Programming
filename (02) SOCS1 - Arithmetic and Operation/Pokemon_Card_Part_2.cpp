#include <stdio.h>

int main(){
	
	// Declare
		double pokecard, releasedpokecard, persen;
	
	// Input
		scanf("%lf %lf", &pokecard, &releasedpokecard);
	
	// Process
		persen = (pokecard / releasedpokecard) * 100;
	
	// Output
		printf("%.2lf%%\n", persen);
	
	
	return 0;
}
