#include <stdio.h>
#include <string.h>

void checkreverse(char str[], short* True){
	
	short len = strlen(str);
	for(short i = 0, j = len; i < len; i++, j--){
		if(str[i] != str[j - 1]){
			*True = 0;
			break;
		} 
	}
}

int main(){
	
	// Declare
		short numcase;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		
		for(short i = 0; i < numcase; i++){
			char str[1001];
			scanf("%s", str);
			
			short True = 1;
			checkreverse(str, &True);
		
			printf("Case #%hd: %s\n", i + 1, (True) ? "yes" : "no");
		}
	
	return 0;
}
