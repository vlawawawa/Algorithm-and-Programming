#include <stdio.h>

int main(){
	
	// Declare
		int numcase, a = 0;
		
	// Input
		scanf("%d", &numcase);
			double persGOJO[numcase], persBIPAY[numcase];
		while(a < numcase){
			scanf("%lf %lf", &persGOJO[a], &persBIPAY[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			if(persGOJO[i] > persBIPAY[i]){
				
	// Output
				printf("Case #%d: Go-Jo\n", i + 1);
			} else{
				printf("Case #%d: Bi-Pay\n", i + 1);
			}
		}
	
	
	
	
	return 0;
}
