#include <stdio.h>

int main(){
	
	// Declare
		int strt, num;
		
	// Input
		scanf("%d %d", &strt, &num);
	
	// Process
		for(int i = 0; i < num; i++){
			
	// Output
			printf("%d\n", strt + i);
		}
	
	
	return 0;
}
