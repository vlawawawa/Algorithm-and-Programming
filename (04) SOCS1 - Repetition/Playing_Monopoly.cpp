#include <stdio.h>

int main(){
	
	// Declare
		int numroles, roles[2000], position = 0;
		
	// Input
		scanf("%d", &numroles);
		int a = 0;
		while(a < numroles){
			scanf("%d", &roles[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < numroles; i++){
			position += roles[i];
			position %= 40;
			switch(position){
				case 12:
					position = 28;
				break;
				case 30:
					position = 10;
				break;
				case 35:
					position = 7;
				break;
			}
		}
	
	// Output
		printf("%d\n", position);
	
	
	return 0;
}
