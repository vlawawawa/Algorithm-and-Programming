#include <stdio.h>
#include <string.h>

void revstr(char str[], int len){
	if(len >= 0){
		printf("%c", str[len]);
		revstr(str, len - 1);
	}
}

int main(){
	
	// Declare
		short numcase;
		char str[1001];
	
	// Input, Process, Output
		scanf("%hd", &numcase);
			getchar();
		for(short i = 0; i < numcase; i++){
			scanf("%[^\n]", str);
				getchar();
			printf("Case #%d: ", i + 1);
			revstr(str, strlen(str) - 1);
			printf("\n");
		}
		
	
	
	return 0;
}
