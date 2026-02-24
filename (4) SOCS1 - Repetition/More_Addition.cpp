#include <stdio.h>

int main(){
	
	// Declare
		int integer, combination = 0;
		
	// Input
		scanf("%d", &integer);
	
	// Process
		for(int b = 0; b <= integer; b++){
			for(int j = 0; j <= integer; j++){
				int l = integer - j - b;
				if(l >= 0)
					combination++;
			}
		}
	
	// Output
		printf("%d\n", combination);
	
	
	return 0;
}
