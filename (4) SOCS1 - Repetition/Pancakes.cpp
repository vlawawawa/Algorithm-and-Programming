#include <stdio.h>

int main(){
	
	// Declare
		int numCase, numCuts[100];
		
	// Input
		scanf("%d", &numCase);
		for(int i = 0; i < numCase; i++){
			scanf("%d", &numCuts[i]);
		}
	
	// Process and Output
		for(int i = 0; i < numCase; i++){
			printf("Case %d:", i + 1);
			int piece = 1;
			for(int j = 0; j < numCuts[i]; j++){
				piece += j;
				printf(" %d", piece);
			}
			printf("\n");
		}
		
	
	
	return 0;
}
