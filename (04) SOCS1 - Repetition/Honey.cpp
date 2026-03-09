#include <stdio.h>

int main(){
	
	// Declare
		int numcase, fbot[10000], ebot[10000], tbot[10000], rbot[10000], a = 0;
		
	// Input
		scanf("%d", &numcase);
		while(a < numcase){
			scanf("%d %d", &fbot[a], &ebot[a]);
			getchar();
		a++;
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
				tbot[i] += fbot[i];
			while(fbot[i] >= ebot[i]){
				rbot[i] = fbot[i] / ebot[i];
				tbot[i] += rbot[i];
				fbot[i] = fbot[i] % ebot[i] + rbot[i];
			} 
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %d\n", i + 1, tbot[i]);
		}
	
	
	return 0;
}
