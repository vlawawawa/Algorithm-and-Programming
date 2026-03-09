#include <stdio.h>

int main(){
	
	// Declare
		short numcase;
		int numtest, minNum;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numtest);
			int num[numtest];
			for(int j = 0; j < numtest; j++){
				scanf("%d", &num[j]);
			}
			int result = 0;
			for(int j = 0; j < numtest; j++){
				scanf("%d", &minNum);
				if(minNum > num[j]) result++;
			}
			printf("Case #%d: %d\n", i + 1, result);
		}
	
	return 0;
}
