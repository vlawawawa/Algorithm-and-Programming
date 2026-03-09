#include <stdio.h>
		
int main(){
	
	// Declare
		int numCase, numIngr, ingrScar[100000], ingrNeed[100000], ingrHad[100000];
		
	// Input, Process, and Output
		scanf("%d", &numCase);
		for(int i = 0; i < numCase; i++){
			scanf("%d", &numIngr);
			for(int j = 0; j < numIngr; j++){
				scanf("%d", &ingrNeed[j]);
			}
			for(int k = 0; k < numIngr; k++){
				scanf("%d", &ingrHad[k]);
			}
			for(int l = 0; l < numIngr; l++){
				ingrScar[l] = ingrNeed[l] - ingrHad[l];
			}
			printf("Case #%d:", i + 1);
			for(int o = 0; o < numIngr; o++){
				printf(" %d", ingrScar[o]);
			}
			printf("\n");
		}	
	
	
	return 0;
}
