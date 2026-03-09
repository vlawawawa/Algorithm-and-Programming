#include <stdio.h>

int main(){
	
	// Declare
		int numcase, timesent[100000], timesolved[100000], timeviewed[100000], clarify = 0;
		
	// Input
		scanf("%d", &numcase);
		int a = 0;
		while(a < numcase){
			scanf("%d %d %d", &timesent[a], &timesolved[a], &timeviewed[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			if((timesent[i] >= 0) && (timesent[i] <= timesolved[i]) && (timesolved[i] > timeviewed[i])){
				clarify += 1;
			} else{
				continue;
			}	 
		}
	
	// Output
		printf("%d\n", clarify);
	
	
	return 0;
}
