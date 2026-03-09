#include <stdio.h>

int main(){
	
	// Declare
		int inthour[5], intminute[5], finhour[5], finminute[5];
		char course[5][11];
		int a = 0;
	
	// Input
		while(a < 5){
			scanf("%s %d:%d-%d:%d", course[a], &inthour[a], &intminute[a], &finhour[a], &finminute[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < 5; i++){
			inthour[i] -= 1;
			finhour[i] -= 1;
				if(inthour[i] == -1){
				inthour[i] = 23;
				}
				if(finhour[i] == -1){
				finhour[i] = 23;
				}
			
	// Output
			printf("%s %02d:%02d-%02d:%02d\n", course[i], inthour[i], intminute[i], finhour[i], finminute[i]);
		}
	
	
	return 0;
}
