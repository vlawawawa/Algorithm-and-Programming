#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numbox;
		
	// Input, Process, and Output
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numbox);
			int box[numbox] = {0};
			for(int j = 0; j < numbox; j++){
				scanf("%d", &box[j]);
			}
			int chosenbox1 = -1000000, chosenbox2 = -1000000, duplicate = 0;
			for(int k = 0; k < numbox; k++){
				if(chosenbox1 < box[k])
					chosenbox1 = box[k];
            }
			for(int l = 0; l < numbox; l++){
				if(box[l] == chosenbox1)
                	duplicate++;
				if(chosenbox2 < box[l] && box[l] != chosenbox1 || duplicate > 1 && box[l] > chosenbox2)
					chosenbox2 = box[l];
			}
			printf("Case #%d: %d\n", i + 1, chosenbox1 + chosenbox2);
		}	
	
	
	return 0;
}
