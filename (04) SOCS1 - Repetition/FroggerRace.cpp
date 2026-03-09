#include <stdio.h>

int main(){
	
	// Declare
		int numcase, finishline[1000], jumpsdist[1000], numjumps[1000];
		
	// Input
		scanf("%d", &numcase);
		int a = 0;
		while(a < numcase){
			scanf("%d", &finishline[a]);
				getchar();
		a++;
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			numjumps[i] = 0;
			jumpsdist[i] = 0;
			while(jumpsdist[i] < finishline[i]){
				numjumps[i] += 1;	
				jumpsdist[i] += numjumps[i];
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %d\n", i + 1, numjumps[i]);
		}
	
	
	return 0;
}
