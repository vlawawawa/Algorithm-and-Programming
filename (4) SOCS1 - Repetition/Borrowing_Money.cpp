#include <stdio.h>

int main(){
	
	// Declare
		short numOwe;
		int owe, sum = 0;
		
	// Input and Process
		scanf("%hd", &numOwe);
		for(int i = 0; i < numOwe; i++){
			scanf("%d", &owe);
			sum += owe;
		}
	
	// Output
		printf("%d\n", sum);
	
	return 0;
}
