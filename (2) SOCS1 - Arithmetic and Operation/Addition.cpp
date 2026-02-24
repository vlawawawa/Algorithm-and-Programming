#include <stdio.h>

int main(){
	
	// Declare
		int num1[3], num2[3], a = 0;
			
	// Input
		while(a < 3){
			scanf("%d + %d =", &num1[a], &num2[a]); 
				getchar();
		a++;
		}
		
	// Output
		for(int i = 0; i < 3; i++){
			printf("%d\n", num1[i] + num2[i]);
		}
		
		
	
	return 0;
}
