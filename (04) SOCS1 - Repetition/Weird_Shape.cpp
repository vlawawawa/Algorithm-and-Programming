#include <stdio.h>

int main(){
	
	// Declare
		int numcase, sizeX[10];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &sizeX[i]);
		}
	
	// Process and Output
		for(int i = 0; i < numcase; i++){
			for(int j = 0; j < sizeX[i]; j++){ // Row
				for(int k = 0; k < sizeX[i]; k++){ // Col
					if(j == 0 || k == 0 || j == sizeX[i] - 1 || k == sizeX[i] - 1){
						printf("*");
					} else if(k == j || k == sizeX[i] - 1 - j){
						printf("*");
					} else{
						printf(" ");
					}
				}
			printf("\n");
			}
		printf("\n");
		}
		
	
	
	return 0;
}
