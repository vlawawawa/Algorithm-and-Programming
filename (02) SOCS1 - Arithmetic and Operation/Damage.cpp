#include <stdio.h>

int main(){
	
	// Declare
		double phys, mag, tru3, totdmg;
		
	// Input
		scanf("%lf %lf %lf", &phys, &mag, &tru3);
	
	// Process
		totdmg = phys*0.2 + mag*0.3 + tru3*0.5;
		
	// Output
		printf("%.2lf\n", totdmg);
	
	
	return 0;
}
