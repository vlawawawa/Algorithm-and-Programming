#include <stdio.h>

int main(){
	
	// Declare
		int numweapon, numdragon;
		int weapon, dragon;
		int chosenweap = 0, chosendrag = 0;
	
	// Input and Process
		scanf("%d %d", &numweapon, &numdragon);
		for(int i = 0; i < numweapon; i++){
			scanf("%d", &weapon);
			if(weapon > chosenweap) chosenweap = weapon;
		}
		for(int i = 0; i < numdragon; i++){
			scanf("%d", &dragon);
			if(dragon > chosendrag) chosendrag = dragon;
		}
		
	// Output
		printf("%s\n", chosenweap > chosendrag ? "The dark secret was true" : "Secret debunked");
		
		
	
	return 0;
}
