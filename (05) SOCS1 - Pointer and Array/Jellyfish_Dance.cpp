#include <stdio.h>

int main(){
	
	// Declare
		int numday, viewsperday[100], numfriend, firstday, lastday, totviews[100] = {0};
		
	// Input and Process
		scanf("%d", &numday);
		for(int i = 0; i < numday; i++){
			scanf("%d", &viewsperday[i]);
		}
		scanf("%d", &numfriend);
		for(int j = 0; j < numfriend; j++){
			scanf("%d %d", &firstday, &lastday);
			for(int k = firstday - 1; k <=  lastday - 1; k++){
				totviews[j] += viewsperday[k];
			}
		}
	
	// Output
		for(int i = 0; i < numfriend; i++){
			printf("Case #%d: %d\n", i + 1, totviews[i]);
		}
	
	
	return 0;
}
