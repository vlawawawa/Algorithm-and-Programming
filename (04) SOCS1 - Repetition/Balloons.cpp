#include <stdio.h>

int main(){
	
	// Declare
		int numballoons, strengthballoons[100000], balloonspop, strength;
		
	// Input
		scanf("%d %d", &numballoons, &strength);
		int a = 0;
		while(a < numballoons){
			scanf("%d", &strengthballoons[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < numballoons; i++){
			if(strengthballoons[i] < strength){
				balloonspop += 1;
			} else{
				continue;
			}
		}
		
	// Output
		printf("%d\n", balloonspop);
	
	
	return 0;
}
