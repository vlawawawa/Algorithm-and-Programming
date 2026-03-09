#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numarr, tot1, tot2, numint[100000] = {0};;
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numarr);
			tot1 = 0, tot2 = 0;
			for(int j = 0; j < numarr; j++){
				scanf("%d", &numint[j]);
				if(j == 0) tot1 += numint[j];
				else tot2 += numint[j];
			}

	// Process and Output
			short same = 0;
			for(int k = 1; k <= numarr; k++){
				if(tot1 == tot2){
					same = 1;
					break;	
				} else{
					tot1 += numint[k];
					tot2 -= numint[k];
				}
			}
			printf("Case #%d: %s\n", i + 1, same ? "Yes" : "No");
		}
		
	
	return 0;
}
