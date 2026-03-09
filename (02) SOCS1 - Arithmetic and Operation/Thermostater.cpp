#include <stdio.h>

int main(){
	
	// Declare
		int T, a = 0;
		
	// Input
		scanf("%d", &T);
			double cel[T], rea[T], fah[T], kel[T];
		while(a < T){
			scanf("%lf", &cel[a]);
				getchar();
		a++;
		}
		
	// Process
		for(int i = 0; i < T; i++){
			rea[i] = 0.8 * cel[i];
			fah[i] = (1.8 * cel[i]) + 32;
			kel[i] = cel[i] + 273;
			
		// Output
			printf("%.2lf %.2lf %.2lf\n", rea[i], fah[i], kel[i]);
			
		}
	
	
	return 0;
}
