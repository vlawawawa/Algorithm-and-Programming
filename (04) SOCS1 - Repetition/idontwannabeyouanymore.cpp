#include <stdio.h>
#include <string.h>

int main(){
	
	// Declare
		short numcase, len;
		
	// Input
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &len);
				getchar();
			char str[len + 1];
			scanf("%[^\n]", str);
				getchar();
				
			printf("Case #%d: ", i + 1);
			for(int j = 0; j < len; j++){
				if((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z')) 
					printf("%c", str[j]);
			}
			printf("\n");
		}
	
	
	return 0;
}
