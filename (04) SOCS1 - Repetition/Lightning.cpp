#include <stdio.h>

int main(){
	
	// Declare
		short numcase;
		short ashiap[6];
		
	// Input
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			for(int j = 0; j < 6; j++){
				scanf("%hd", &ashiap[j]);
			}
			printf("Case #%d: ", i + 1);
			for(int k = 0; k < 6; k++){
				for(int l = 0; l < ashiap[k]; l++){
					if(k == 0) printf("a");
					else if(k == 1) printf("s");
					else if(k == 2) printf("h");
					else if(k == 3) printf("i");
					else if(k == 4) printf("a");
					else if(k == 5) printf("p");
				}
			}
			printf("\n");
		}
	
	return 0;
}
