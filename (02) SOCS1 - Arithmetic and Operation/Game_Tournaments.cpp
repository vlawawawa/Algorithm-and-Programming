#include <stdio.h>

int main(){
	
	// Declare
		int team;
		long long int possibilities;
	
	// Input
		scanf("%d", &team);
	
	// Process
		possibilities = (1ll << team) - 1;
	
	// Output
		printf("%lld\n", possibilities);
	
	
	return 0;
}
