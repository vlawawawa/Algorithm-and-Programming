#include <stdio.h>

int main(){
	
	// Declare
		short numcase, numstairs, steps; 
		
	// Input and Process
		scanf("%hd", &numcase);
		char ans[numcase + 1] = {'1'};
		for(int i = 0; i < numcase; i++){
			scanf("%hd %hd\n", &numstairs, &steps);
			
			char hall[numstairs + 1];
				scanf("%s", hall);
				
			short b = steps;
			for(int j = 0; j < numstairs; j++){
				--b;
				if(hall[j] == '1'){
					b = steps;
					break;
				} else if(b == 0){
					ans[i] = '0';
					break;	
				}
			}
			for(int k = numstairs; k > 0; k--){
				--b;
				if(hall[k - 1] == '1')
					break;
				else if(b == 0){
					ans[i] = '0';
					break;	
				}
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %s\n", i + 1, (ans[i] == '0') ? "Dead" : "Alive");
		}
	
	
	return 0;
}
