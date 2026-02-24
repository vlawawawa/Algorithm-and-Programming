#include <stdio.h>

int main(){
	
	// Declare
		short numcase, numq;
		
	// Input
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &numq);
			char ans[numq + 1], anskey[numq + 1];
			scanf("%s", ans);
			scanf("%s", anskey);
			short truee = 0;
			for(int j = 0; j < numq; j++){
				if(ans[j] == anskey[j]) truee++;
			}
			printf("Case #%d: %hd\n", i + 1, (truee * 100) / numq);
		}
	
	return 0;
}
