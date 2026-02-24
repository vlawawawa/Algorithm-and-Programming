#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numtoys[100], factor[100][4], toys[100], toysbyebye[100];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numtoys[i]);
			for(int j = 0; j < 4; j++){
				scanf("%d", &factor[i][j]);
			}
		}
	
	// Process and Output
		for(int i = 0; i < numcase; i++){
			toys[i] = 1;
			for(int j = 0; j < numtoys[i]; j++){
				if((toys[i] + j) % factor[i][0] == 0)
					toysbyebye[i]++;
				else if((toys[i] + j) % factor[i][1] == 0)
					toysbyebye[i]++;
				else if((toys[i] + j)% factor[i][2] == 0)
					toysbyebye[i]++;
				else if((toys[i] + j)% factor[i][3] == 0)
					toysbyebye[i]++;
				else 
					continue;
			}
			printf("Case #%d: %d\n", i + 1, toysbyebye[i]);
		}
	
	
	return 0;
}
