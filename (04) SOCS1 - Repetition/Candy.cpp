#include <stdio.h>

	// Declare
		int numcase, numcandy[100], moneyhad[100], candyprice[100][10000], chosenprice[100];
		
int main(){
	
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d %d", &numcandy[i], &moneyhad[i]);
			for(int j = 0; j < numcandy[i]; j++){
				scanf("%d", &candyprice[i][j]);
			}
		}
	
	// Process and Output
		for(int i = 0; i < numcase; i++){
			chosenprice[i] = 1000000000;
			for(int j = 0; j < numcandy[i]; j++){
				if(candyprice[i][j] < chosenprice[i]){
					chosenprice[i] = candyprice[i][j];
				} else{
					continue;
				}
			}
			moneyhad[i] /= chosenprice[i];
			printf("Case #%d: %d\n", i + 1, moneyhad[i]);
		}		
	
	
	return 0;
}
