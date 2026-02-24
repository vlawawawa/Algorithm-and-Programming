#include <stdio.h>
#include <string.h>

int main(){
	
	// Declare
		short numcase;
		char string[100001];
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%s", string);
			int distinctCharacter = 0;
			int alphabet[124] = {0};
			int constr = strlen(string);
			for(int j = 0; j < constr; j++){
				if(++alphabet[string[j]] == 1) 
					distinctCharacter++;
			}
			printf("Case #%d: %s\n", i + 1, (distinctCharacter % 2 == 1) ? "Ewwww" : "Yay");
		}
	
	
	return 0;
}
