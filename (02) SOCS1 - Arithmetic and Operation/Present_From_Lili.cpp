#include <stdio.h>

int main(){
	
	// Declare
		double L, W, H, luasbungkus;
	
	// Input
		scanf("%lf %lf %lf", &L, &W, &H);
	
	// Process
		luasbungkus = ((W * L) * 3) + (W * H);
	
	// Output
		printf("%.3lf\n", luasbungkus);
	
	
	return 0;
}
