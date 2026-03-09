#include <stdio.h>

int main(){
	
	// Declare
		int numcase;
		double radius[1000], height[1000], surface[1000];
		const double pi = 3.14;
		
	// Input and Process
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%lf %lf", &radius[i], &height[i]);
			surface[i] = (2 * pi * radius[i] * radius[i]) + (2 * pi * radius[i] * height[i]);
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %.2lf\n", i + 1, surface[i]);
		}
	
	
	return 0;
}
