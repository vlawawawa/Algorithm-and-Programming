#include <stdio.h>

bool operation(int num, int numend){
	
    if(num == numend) return true;
    if(num == 1) return false;
    	   	
    if (num % 2 == 0) return operation(num / 2, numend);
    else return operation(num * 3 + 1, numend);
}

int main(){
	
	// Declare
		short numcase, num, numend;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			scanf("%hd %hd", &num, &numend);
			
			bool YES = operation(num, numend);
			
			printf("Case #%hd: %s\n", i + 1, (YES) ? "YES" : "NO");
		}
	
	return 0;
}
