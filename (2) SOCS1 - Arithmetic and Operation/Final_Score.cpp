#include <stdio.h>

int main(){
	
	// Declare
		double Tugas, UTS, UAS, NilaiAkhir;
		
	// Input
		scanf("%lf %lf %lf", &Tugas, &UTS, &UAS);
	
	// Process
		NilaiAkhir = Tugas*0.2 + UTS*0.3 + UAS*0.5;
		
	// Output
		printf("%.2lf\n", NilaiAkhir);
	
	
	return 0;
}
