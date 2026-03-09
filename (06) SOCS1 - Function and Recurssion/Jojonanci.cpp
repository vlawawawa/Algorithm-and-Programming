#include <stdio.h>

int jojonanci(int index, int index1, int index2){
	if(index == 0) return index1;
	if(index == 1) return index2;
	
	return jojonanci(index - 1, index1, index2) - jojonanci(index - 2, index1, index2);
}

int main(){
	
	// Declare
		short numcase, index;
		int index1, index2;
	
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			scanf("%hd %d %d", &index, &index1, &index2);
			printf("Case #%d: ", i + 1);
			printf("%d", jojonanci(index, index1, index2));
			printf("\n");
		}
	
	return 0;
}
