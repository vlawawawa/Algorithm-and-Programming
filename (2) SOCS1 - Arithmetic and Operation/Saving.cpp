#include <stdio.h>

int main(){
	
	// Declare
		double otwcuan;
		double pembuatcuan;
	
	// Input
		scanf("%lf %lf", &otwcuan, &pembuatcuan);
	
	// Process
		for(int i = 0; i < 3; i++){
			otwcuan *= ((pembuatcuan / 100) + 1);
		}
		
	// Output
		printf("%.2lf\n", otwcuan);
	
	
	return 0;
}
