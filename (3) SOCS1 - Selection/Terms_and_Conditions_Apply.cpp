#include <stdio.h>

int main(){
	
	// Declare
		int numcase, a = 0;
		
	// Input
		scanf("%d", &numcase);
			double price[numcase], pers[numcase], cashback[numcase], disc[numcase];
		while(a < numcase){
			scanf("%lf %lf %lf", &price[a], &pers[a], &cashback[a]);
		a++;	
		}
		
	// Process
		for(int i = 0; i < numcase; i++){
			disc[i] = price[i] * (pers[i] / 100);
			if(disc[i] <= cashback[i]){
				
	// Output
				printf("Case #%d: %.0lf\n", i + 1, disc[i]);
			} else{
				printf("Case #%d: %.0lf\n", i + 1, cashback[i]);
			}
		}
	
	
	
	
	return 0;
}
