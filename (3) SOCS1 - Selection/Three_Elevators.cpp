#include <stdio.h>

int main(){
	
	// Declare
		int elev[3], a, b;
		
	// Input
		scanf("%d %d %d", &elev[0], &elev[1], &elev[2]);
		
	// Process
		a = elev[2] - elev[0];
		b = elev[1] - elev[2];
	
	// Output
		if((elev[0] > elev[2]) || (elev[1] < elev[2])){
			printf("-1\n");
		} else if(a == b){
			printf("%d\n", a);
		} else{
			printf("-1\n");
		}
	
	
	
	return 0;
}
