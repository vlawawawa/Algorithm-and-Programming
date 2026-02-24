#include <stdio.h>

int main(){
	
	// Declare 
		short numcase, numplay;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &numplay);
			printf("Case #%d:\n", i + 1);
			for(int j = 1; j <= numplay; j++){
				printf("%d %s\n", j, (j % 3 == 0) && (j % 15 != 0) || (j % 5 == 0) && (j % 15 != 0) ? "Jojo" : "Lili");
			}
		}
	
	return 0;
}
