#include <stdio.h>

int main(){
	
	// Declare
		short numcase, sizetri;
		
	// Input
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &sizetri);
			for(int j = 0; j < sizetri; j++){
				for(int k = 0; k < sizetri + j; k++){
					if(k < (sizetri - 1) - j) printf(" "); 
					else printf("*");
				}
				printf("\n");
			}
		}
	
	return 0;
}
