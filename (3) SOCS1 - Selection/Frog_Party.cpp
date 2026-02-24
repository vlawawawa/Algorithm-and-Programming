#include <stdio.h>

int main(){
	
	// Declare
		int numcase, a = 0;
		
	// Input
		scanf("%d", &numcase);
			int mfrog[numcase], ffrog[numcase];
		while(a < numcase){
			scanf("%d %d", &mfrog[a], &ffrog[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			if((mfrog[i] % 2 + ffrog[i] % 2) == 2){
				
	// Output
				printf("Case #%d: Need more frogs\n", i + 1);
			} else{
				printf("Case #%d: Party time!\n", i + 1);
			}
		}
	
	
	
	
	return 0;
}
