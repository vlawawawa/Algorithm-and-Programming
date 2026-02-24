#include <stdio.h>

int main(){
	
	// Declare
		int numPrice, Price[100], numCase, whichPrice, newPrice;
		
	// Input, Process, and Output
		scanf("%d", &numPrice);
		for(int i = 0; i < numPrice; i++){
			scanf("%d", &Price[i]);
		}
		scanf("%d", &numCase);
		for(int j = 0; j < numCase; j++){
			scanf("%d %d", &whichPrice, &newPrice);
			Price[whichPrice - 1] = newPrice;
			printf("Case #%d:", j + 1);
			for(int k = 0; k < numPrice; k++){
				printf(" %d", Price[k]);
			}
			printf("\n");
		}
	
	
	return 0;
}
