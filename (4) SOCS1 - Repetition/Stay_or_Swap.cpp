#include <stdio.h>

int main(){
	
	// Declare
		int ncase, plate[1000], maxportion[1000], portion[1000][101], chosenplate[1000];
		
	// Input
		scanf("%d", &ncase);
		for(int i = 0; i < ncase; i++){
			scanf("%d %d %d", &plate[i], &maxportion[i], &portion[i][0]);
			int a = 0;
			while(a < plate[i]){
				scanf("%d", &portion[i][a + 1]);
			a++;
			}
		}
	
	// Process
		for(int i = 0; i < ncase; i++){
			chosenplate[i] = portion[i][0];
			for(int j = 0; j <= plate[i]; j++){
				if((maxportion[i] >= portion[i][j]) && (chosenplate[i] < portion[i][j])){
					chosenplate[i] = portion[i][j];
				} else{
					continue;
				}
			}
		}	
	
	// Output
		for(int i = 0; i < ncase; i++){
			printf("Case #%d: %d\n", i + 1, chosenplate[i]);
		}
	
	
	return 0;
}
