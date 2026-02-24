#include <stdio.h>

int main(){
	
	// Declare
		short numcase, numchange, fromIndex, toIndex;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			char code[1001] = {0};
			scanf("%hd %s", &numchange, code);
			for(int j = 0; j < numchange; j++){
				scanf("%hd %hd", &fromIndex, &toIndex);
				fromIndex--; 
				toIndex--;  	
				while(fromIndex < toIndex){
					char temp = code[fromIndex];
					code[fromIndex] = code[toIndex];
					code[toIndex] = temp;
					fromIndex++;
					toIndex--;
				}
			}
			printf("Case #%d: %s\n", i + 1, code);
		}
	
	
	return 0;
}
