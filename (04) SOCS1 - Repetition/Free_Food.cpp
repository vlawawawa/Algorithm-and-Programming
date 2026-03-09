#include <stdio.h>

int main(){
	
	// Declare
		int numofcases;
				
	// Input
		scanf("%d", &numofcases);
			int numofmenu[numofcases], moneyhad[numofcases], menuprice[numofcases][1000];
		for(int i = 0; i < numofcases; i++){
			scanf("%d %d", &numofmenu[i], &moneyhad[i]);
			int a = 0;
			while(a < numofmenu[i]){
				scanf("%d", &menuprice[i][a]);
			a++;
			} 
		}
	
	// Process
		for(int i = 0; i < numofcases; i++){
			for(int j = 0; j < numofmenu[i]; j++){
				moneyhad[i] -= menuprice[i][j];
			}
		}
	
	// Output
		for(int i = 0; i < numofcases; i++){
			if(moneyhad[i] < 0)
			printf("Case #%d: Wash dishes\n", i + 1);
			else
			printf("Case #%d: No worries\n", i + 1);
		} 
		
			
	
	return 0;
}
