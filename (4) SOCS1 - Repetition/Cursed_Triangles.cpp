#include <stdio.h>

int main(){
	
	// Declare
		short numtri, sizetri;
		
	// Input
		scanf("%hd %hd", &numtri, &sizetri);
		
	// Process and Process
		for(int k = 0; k < numtri; k++){
			for(int i = 0; i < sizetri; i++){
				for(int j = 0; j < sizetri; j++){
					if(j >= (sizetri - 1) - i) printf("*");
					else printf(" ");
				}
				printf("\n");
			}
		}
		
	
	return 0;
}
