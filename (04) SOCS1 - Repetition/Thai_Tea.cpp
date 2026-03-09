#include <stdio.h>

int main(){
	
	// Declare
		int numofcase, thaitea[10000], thaiteaneeded[10000], totalthaitea[10000], newthaitea[10000];
		
	// Input
		scanf("%d", &numofcase); 
		int a = 0;
		while(a < numofcase){
			scanf("%d %d", &thaitea[a], &thaiteaneeded[a]);
			getchar();
		a++;
		}
	
	// Process
		for(int i = 0; i < numofcase; i++){
			totalthaitea[i] += thaitea[i];
			while(thaitea[i] >= thaiteaneeded[i]){
				newthaitea[i] = thaitea[i] / thaiteaneeded[i];
				totalthaitea[i] += newthaitea[i];
				thaitea[i] = thaitea[i] % thaiteaneeded[i] + newthaitea[i];
			}
		}
	
	// Output
		for(int i = 0; i < numofcase; i++){
			printf("Case #%d: %d\n", i + 1, totalthaitea[i]);
		}
	
	
	return 0;
}
