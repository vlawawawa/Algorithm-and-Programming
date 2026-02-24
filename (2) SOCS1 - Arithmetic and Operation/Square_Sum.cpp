#include <stdio.h>

int main(){
	
	// Declare
		double a[3], b[3], c[3], d[3], tot[3];
		int yi, er, san, si, i;
	
	// Input
		scanf("%lf %lf %lf %lf\n", &a[0], &b[0], &c[0], &d[0]);
		scanf("%lf %lf %lf %lf\n", &a[1], &b[1], &c[1], &d[1]);
		scanf("%lf %lf %lf %lf", &a[2], &b[2], &c[2], &d[2]);
		
	// Process
		for(i = 0; i < 3; i++){
		
			yi = (a[i] / 1) * 2;
			er = (b[i] / 2) * 4;
			san = (c[i] / 3) * 6;
			si = (d[i] / 4) * 4;
			tot[i] = yi + er + san + si;
	
	// Output
			printf("%.2lf\n", tot[i]);
			
		}
	
	
	return 0;
}
