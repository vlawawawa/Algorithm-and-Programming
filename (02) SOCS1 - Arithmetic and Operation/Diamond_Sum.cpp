#include <stdio.h>

int main(){
	
	// Declare
		int T, a = 0;
		double yi, er, san, si;
	
	// Input
		scanf("%d", &T);
			double na[T], nb[T], nc[T], nd[T], tot[T];
		while(a < T){
			scanf("%lf %lf %lf %lf", &na[a], &nb[a], &nc[a], &nd[a]);
		a++;
		}
		
	// Process
		for(int i = 0; i < T; i++){
			yi = (na[i] / 1) * 2;
			er = (nb[i] / 2) * 4;
			san = (nc[i] / 3) * 4;
			si = (nd[i] / 4) * 2;
			tot[i] = yi + er + san + si;
	
	// Output
			printf("%.2lf\n", tot[i]);
			
		}
	
	
	return 0;
}
