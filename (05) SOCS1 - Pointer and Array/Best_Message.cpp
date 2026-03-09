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
			short len = strlen(str);
			char encrypt[1001] = {0};
			for(int j = 0; j < len; j++){
				if(65 <= str[j] && str[j] <= 68){
					if(str[j] == 'A') encrypt[j] = '0';
					else if(str[j] == 'B') encrypt[j] = '1';
					else if(str[j] == 'C') encrypt[j] = '2';
					else if(str[j] == 'D') encrypt[j] = '3';
					str[j] = 'A';
				} else if(69 <= str[j] && str[j] <= 72){
					if(str[j] == 'E') encrypt[j] = '0';
					else if(str[j] == 'F') encrypt[j] = '1';
					else if(str[j] == 'G') encrypt[j] = '2';
					else if(str[j] == 'H') encrypt[j] = '3';
					str[j] = 'E';
				} else if(73 <= str[j] && str[j] <= 78){
					if(str[j] == 'I') encrypt[j] = '0';
					else if(str[j] == 'J') encrypt[j] = '1';
					else if(str[j] == 'K') encrypt[j] = '2';
					else if(str[j] == 'L') encrypt[j] = '3';
					else if(str[j] == 'M') encrypt[j] = '4';
					else if(str[j] == 'N') encrypt[j] = '5';
					str[j] = 'I';
				} else if(79 <= str[j] && str[j] <= 84){
					if(str[j] == 'O') encrypt[j] = '0';
					else if(str[j] == 'P') encrypt[j] = '1';
					else if(str[j] == 'Q') encrypt[j] = '2';
					else if(str[j] == 'R') encrypt[j] = '3';
					else if(str[j] == 'S') encrypt[j] = '4';
					else if(str[j] == 'T') encrypt[j] = '5';
					str[j] = 'O';
				} else if(85 <= str[j] && str[j] <= 90){
					if(str[j] == 'U') encrypt[j] = '0';
					else if(str[j] == 'V') encrypt[j] = '1';
					else if(str[j] == 'W') encrypt[j] = '2';
					else if(str[j] == 'X') encrypt[j] = '3';
					else if(str[j] == 'Y') encrypt[j] = '4';
					else if(str[j] == 'Z') encrypt[j] = '5';
					str[j] = 'U';
				}	
			}
			printf("Case #%d:\n%s\n%s\n", i + 1, str, encrypt);
		}
		
	
	return 0;
}
