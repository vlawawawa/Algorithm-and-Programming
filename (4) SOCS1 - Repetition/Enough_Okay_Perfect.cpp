#include <stdio.h>

int main(){
	
	// Declare
		int process, num = 1;
		
	// Input
		scanf("%d", &process);
	
	// Process
		for(int i = 0; i < process; i++){
			num = (num * 2) + 1;
		}
	
	// Output
		printf("%d\n", num);
	
	
	return 0;
}
