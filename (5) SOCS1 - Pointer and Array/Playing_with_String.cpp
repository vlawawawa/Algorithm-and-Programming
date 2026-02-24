#include <stdio.h>
#include <string.h>

int main(){
	
	// Declare
		short numcase, numchange;
		char str[1001], letter, change;
		
	// Input, Process and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%s", str);
			short len = strlen(str);
			scanf("%hd", &numchange); 
			getchar();
			for(int j = 0; j < numchange; j++){
				scanf("%c %c", &letter, &change); 
				getchar();
				for(int k = 0; k < len; k++){
					if(str[k] == letter) str[k] = change;
				}
			}
			printf("Case #%d: %s\n", i + 1, str);
		}

	
	
	return 0;
}
