#include <stdio.h>

int main(){
	
	// Declare
		short numclass, numstud, scoreperstud, present[100] = {0};
		
	// Input
		scanf("%hd", &numclass);
		short scores[numclass][101] = {0};
		
		for(int i = 0; i < numclass; i++){
			scanf("%hd", &numstud);
			for(int j = 0; j < numstud; j++){
				scanf("%hd", &scoreperstud);
				scores[i][scoreperstud]++;
			}
		}
		
	// Process and Output
		for(int i = 0; i < numclass; i++){
			for(int j = 0; j < 101; j++){
				if(scores[i][j] >= 1)
					present[i] = scores[i][j];
			}
			printf("Case #%d: %hd\n", i + 1, present[i]);
		}

	
	return 0;
}
