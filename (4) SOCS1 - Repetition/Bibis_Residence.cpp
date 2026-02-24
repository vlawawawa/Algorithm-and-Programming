#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numhouse[10], rowhouse[10][1000], minheight[10];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numhouse[i]);
			int a = 0;
			while(a < numhouse[i]){
				scanf("%d", &rowhouse[i][a]);
			a++;
			}
		}

	// Process
		for(int i = 0; i < numcase; i++){
				minheight[i] = 2000000000;
			for(int j = 0; j < numhouse[i] - 1; j++){
				if((rowhouse[i][j] - rowhouse[i][j + 1] < minheight[i]) && (rowhouse[i][j] - rowhouse[i][j + 1] > 0)){
					minheight[i] = rowhouse[i][j] - rowhouse[i][j + 1];
				} else if((rowhouse[i][j + 1] - rowhouse[i][j] < minheight[i]) && (rowhouse[i][j + 1] - rowhouse[i][j] > 0)){
					minheight[i] = rowhouse[i][j + 1] - rowhouse[i][j];
				} else if(rowhouse[i][j] - rowhouse[i][j + 1] == 0){
					minheight[i] = 0;
				} else{
					continue;
				}
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %d\n", i + 1, minheight[i]);
		}
	
	
	return 0;
}
