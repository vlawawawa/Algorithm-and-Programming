#include <stdio.h>

int main(){
	
	// Declare
		double deg[3], time[3];
		long long int sec[3];
		int T, a = 0;
	
	// Input
		scanf("%d", &T);
		while(a < T){
			scanf("%lf %lld", &deg[a], &sec[a]);
				while(getchar() != '\n');
		a++;	
		}
	
	// Process
		for(int i = 0; i < T; i++){
			time[i] = (deg[i] * sec[i]) / 360;
		
	// Output
			printf("%.2lf\n", time[i]);
		}
	
	
	return 0;
}
