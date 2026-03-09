#include <stdio.h>

int main(){
	
	// Declare
		short numcase;
		char strIP[101];
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			short IP = 1, dot = 0;
			scanf("%s", strIP);
			for(int j = 0; strIP[j] != '\0'; j++){
				if(strIP[j] == '.'){
					if(strIP[j + 1] == '.'){
						IP = 0;
						break;
					}
					dot++;
				}
				else if(strIP[j] < '0' || strIP[j] > '9'){
					IP = 0;
					break;
				}
			}		
			printf("Case #%d: %s\n", i + 1, IP && (dot == 5) ? "YES" : "NO");
		}
		
		
	return 0;
}
