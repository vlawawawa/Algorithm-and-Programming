#include <stdio.h>

int main(){
	
	// Declare
		int U1, U2;
		float T1, T2;
		char N1[101], N2[101];
	
	// Input
		scanf("%s %f %d %s %f %d", N1, &T1, &U1, N2, &T2, &U2);
	
	// Constraints
		if ((U1 >= 1 && U1 <= 100) && (U2 >= 1 && U2 <= 100) && (T1 >= 1.00 && T1 <= 300.00) && (T2 >= 1.00 && T2 <= 300.00)){
	
	// Output
		printf("Name 1: %s\n", N1);
		printf("Height 1: %.2f\n", T1);
		printf("Age 1: %d\n", U1);
		printf("Name 2: %s\n", N2);
		printf("Height 2: %.2f\n", T2);
		printf("Age 2: %d\n", U2);
} 	else{
	return 1;
}

	return 0;
}
