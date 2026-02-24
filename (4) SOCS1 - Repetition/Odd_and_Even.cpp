#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numint[100], integer[100][1000], odd[100], even[100];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){	
			scanf("%d", &numint[i]);
			int a = 0;
			while(a < numint[i]){
				scanf("%d", &integer[i][a]);
			a++;
			}
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			odd[i] = 0;
			even[i] = 0;
			for(int j = 0; j < numint[i]; j++){
				if(integer[i][j] % 2 == 1){
					odd[i]++;
				} else{
					even[i]++;
				}
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Odd group : %d integer(s).\n", odd[i]);
			printf("Even group : %d integer(s).\n\n", even[i]);
		}
	
	
	return 0;
}	
