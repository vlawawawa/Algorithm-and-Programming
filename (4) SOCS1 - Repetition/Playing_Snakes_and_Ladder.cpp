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
			position %= 29999;
			switch(position){
				case 9:
					position = 21;
				break;
				case 33:
					position = 42;
				break;
				case 76:
					position = 92;
				break;
				case 53:
					position = 37;
				break;
				case 80:
					position = 59;
				break;
				case 97:
					position = 88;
				break;
			}
		}
	
	// Output
		printf("%d\n", position);
	
	
	return 0;
}
