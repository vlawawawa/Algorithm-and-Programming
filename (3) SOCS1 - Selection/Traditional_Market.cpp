#include <stdio.h>

int main(){
	
	// Declare
		int otot, hijau, endog;
		
	// Input
		scanf("%d %d %d", &otot, &hijau, &endog);
	
	// Process
		if((otot > hijau) && (hijau > endog)){
	
	// Output 
			printf("Daging\n");
			printf("Sayur\n");
			printf("Telur\n");
		} else if((otot > endog) && (endog > hijau)){
			printf("Daging\n");
			printf("Telur\n");
			printf("Sayur\n");
		} else if((endog > otot) && (otot > hijau)){
			printf("Telur\n");
			printf("Daging\n");
			printf("Sayur\n");
		} else if((endog > hijau) && (hijau > otot)){
			printf("Telur\n");
			printf("Sayur\n");
			printf("Daging\n");
		} else if((hijau > otot) && (otot > endog)){
			printf("Sayur\n");
			printf("Daging\n");
			printf("Telur\n");
		} else if((hijau > endog) && (endog > otot)){
			printf("Sayur\n");
			printf("Telur\n");
			printf("Daging\n");
		}
	
	
	
	return 0;
}
