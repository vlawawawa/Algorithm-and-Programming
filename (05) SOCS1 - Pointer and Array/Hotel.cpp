#include <stdio.h>

int main(){
	
	// Declare
		int numreq, numroom, room[5000], happyguest;
		
	// Input and Process
		scanf("%d", &numreq);
		for(int i = 0; i < numreq; i++){
			scanf("%d", &numroom);
			room[numroom]++;
			if(room[numroom] == 1)
				happyguest++;
		}
	
	// Output
		printf("%d\n", happyguest);
	
	
	return 0;
}
