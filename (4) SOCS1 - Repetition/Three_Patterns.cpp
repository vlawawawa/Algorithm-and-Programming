#include <stdio.h>

int main(){
	
	// Declare
		int num, pat;
		
	// Input
		scanf("%d %d", &num, &pat);
	
	// Process and Output
		for(int i = 1; i <= num; i++){
			for(int j = 1; j <= num; j++){
				printf("#");
			}
			printf("\n");
		} printf("\n");
		
		for(int i = 1; i <= num; i++){
			for(int j = 1; j <= num; j++){
				if(i % pat != 0){
					printf(".");
				} else{
					printf("#");
				}
			}
			printf("\n");
		} printf("\n");
		
		for(int i = 1; i <= num; i++){
			for(int j = 1; j <= num; j++){
				if(j % pat != 0){
					printf(".");
				} else{
					printf("#");
				}
			}
			printf("\n");
		}


	
	return 0;
}
