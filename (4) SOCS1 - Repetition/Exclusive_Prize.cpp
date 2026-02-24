#include <stdio.h>

int main(){
	
	// Declare
		int numitem, itemtype, item[1000] = {0}, packet = 1;
		
	// Input
		scanf("%d", &numitem);
		for(int i = 0; i < numitem; i++){
			scanf("%d", &itemtype);
			item[itemtype]++;
		}
	
	// Process
		for(int i = 0; i < 1000; i++){
			if(item[i] > packet)
				packet = item[i]; 
			else
				continue;
		}
	
	// Output
		printf("%d\n", packet);
	
	
	return 0;
}
