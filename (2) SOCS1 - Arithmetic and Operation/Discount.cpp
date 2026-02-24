#include <stdio.h>

int main(){
	
	// Declare
		double intiprice, curprice, disc;
	
	// Input
		scanf("%lf %lf", &intiprice, &curprice);
	
	// Process
		disc = 100 - ((curprice / intiprice) * 100);
	
	// Output
		printf("%.2lf%%\n", disc);
	
	
	return 0;
}	
