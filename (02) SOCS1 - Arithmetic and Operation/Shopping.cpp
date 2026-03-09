#include <stdio.h>

int main(){
	
	// Declare
		double disc[4], discprice[4], price[4];
		int a = 0;
		
	// Input
		while(a < 4){
			scanf("%lf %lf", &disc[a], &discprice[a]);
				getchar();
		a++;
		}
		
	// Process
		for(int i = 0; i < 4; i++){
			price[i] = discprice[i] / (1 - (disc[i] / 100));
	
	// Output
			printf("$%.2lf\n", price[i]);
		}
	
	
	return 0;
}
