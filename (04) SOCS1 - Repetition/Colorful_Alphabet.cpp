#include <stdio.h>

int main(){
	
	// Declare
		short numcase, alphabet;
	
	// Input
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &alphabet);
			printf("Case #%d: ", i + 1);
			for(int j = 0; j < alphabet; j++){
				printf("%c", 'a' + j);
			}
			printf("\n");
		}
	
	return 0;
}
