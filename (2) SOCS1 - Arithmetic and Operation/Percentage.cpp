#include <stdio.h>

int main(){
	
	// Declare
		int T, a = 0;	
	
	// Input
		scanf("%d", &T);
			double pers[T], intgr[T], hasil[T];
		while(a < T){
			scanf("%lf %lf", &pers[a], &intgr[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < T; i++){
			hasil[i] = ((pers[i] / 100) * intgr[i]);	
	
	// Output
			printf("%.2lf\n", hasil[i]);
		}
	
	
	return 0;
}
