#include <stdio.h>
#include <string.h>

int main(){
	
	// Declare
		short numcase;
		char str[1001];
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%s", str);
			printf("Case %d: ", i + 1);
			for(int j = 0; j < strlen(str); j++){
				printf("%hd", str[j]);
				if(j < strlen(str) - 1)
					printf("-");
			} printf("\n");
		}
	
	
	return 0;
}
