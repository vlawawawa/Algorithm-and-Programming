#include <stdio.h>

int main(){
	
	// Declare
		short numcase, size;
		int K;

	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd %d", &size, &K);
			char str[size + 1];
			scanf("%s", str);
			int tot = 0;
			for(int j = 0; j < size; j++){
				str[j] -= 'a';
				str[j] += (K % 26);
				if(str[j] > 25) str[j] -= 26;
				str[j] += 'a';
			}
			printf("Case #%d: %s\n", i + 1, str);
		}
	
	return 0;
}
