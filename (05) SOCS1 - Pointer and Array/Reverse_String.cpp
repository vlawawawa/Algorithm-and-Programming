#include <stdio.h>
#include <string.h>

int main(){
	
	// Declare
		short numcase;
		char string[1001];
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
			getchar();
		for(int i = 0; i < numcase; i++){
			scanf("%s", string);
			char stringrev[1001];
			printf("Case #%d : ", i + 1);
			for(int j = strlen(string); j > 0; j--){
				printf("%c", string[j - 1]);
			}
			printf("\n");
		}
	
	
	return 0;
}
