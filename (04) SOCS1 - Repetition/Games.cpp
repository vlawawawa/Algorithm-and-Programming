#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numgame[100], liliW[100], bibiW[100];
		char game[100][101];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numgame[i]);	
			scanf("%s", game[i]);
		}
		
	// Process
		for(int i = 0; i < numcase; i++){
			bibiW[i] = 0;
			liliW[i] = 0;
			for(int j = 0; j < numgame[i]; j++){
				switch(game[i][j]){
					case 'L':{
						liliW[i] += 1;
						break;
					} case 'B':{
						bibiW[i] += 1;
						break;
					} case 'T':{
						break;
					}
				}
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			if(bibiW[i] > liliW[i]){
				printf("Bibi\n");
			} else if(bibiW[i] < liliW[i]){
				printf("Lili\n");
			} else{
				printf("None\n");
			}
		}
	
	
	return 0;
}
