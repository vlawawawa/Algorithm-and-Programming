#include <stdio.h>

int main(){
	
	// Declare
		short numcase, size;
		
	// Input
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			scanf("%hd", &size);
			int num[size];
			
			for(short j = 0; j < size; j++){
				scanf("%d", &num[j]);
			}
			
			short j = size;
			printf("Case #%hd:", i + 1);
			while(j--){
				printf(" %d", num[j]);
			}
			printf("\n");
		}
	
	
	return 0;
}
