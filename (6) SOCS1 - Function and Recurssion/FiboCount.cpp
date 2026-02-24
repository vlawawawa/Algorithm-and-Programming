#include <stdio.h>

int fibo(int* counter, short nterm){
	*counter += 1;
	if(nterm == 0 || nterm == 1) return 1;
	
	return fibo(counter, nterm - 1) + fibo(counter, nterm - 2);
}

int main(){
	
	// Declare
		short numcase, nterm;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			scanf("%hd", &nterm);
			int counter = 0;
			fibo(&counter, nterm);
			printf("Case #%hd: %d\n", i + 1, counter);
		}
	
	
	return 0;
}
