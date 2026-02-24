#include <stdio.h>

int main(){
	
	// Declare
		int numcase, height[100], width[100];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d %d", &height[i], &width[i]);
		}
	
	// Process and Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d:\n", i + 1);
			for(int j = 0; j < height[i]; j++){
				for(int k = 0; k < width[i]; k++){
					if(j == 0 || k == 0 || j == height[i] - 1 || k == width[i] - 1)
						printf("#");
					else
						printf(" ");
				}
			printf("\n");
			}
		}
		
		
	return 0;
}
