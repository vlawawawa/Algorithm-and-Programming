#include <stdio.h>

int main(){
	
	// Declare
		double comments, bots, bot;
	
	// Input
		scanf("%lf %lf", &comments, &bots);
	
	// Process
		bot = (bots / comments) * 100;
	
	// Output
		printf("%.4lf%%\n", bot);
	
	
	return 0;
}
