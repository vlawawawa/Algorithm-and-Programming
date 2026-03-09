#include <stdio.h>

void scanhouse(short housex, short housey, char house[][101], int* counter, short floodx, short floody){

	// Basecase
		if(floodx > housex || floody > housey || floodx < 0 || floody < 0) return;
		
	// Process 
		if(house[floodx + 1][floody] == '.' || house[floodx + 1][floody] == '*'){
			if(house[floodx + 1][floody] == '*') *counter += 1;
			house[floodx][floody] = 'P';
			scanhouse(housex, housey, house, counter, floodx + 1, floody);
		} 
		if(house[floodx - 1][floody] == '.' || house[floodx - 1][floody] == '*'){
			if(house[floodx - 1][floody] == '*') *counter += 1;
			house[floodx][floody] = 'P';
			scanhouse(housex, housey, house, counter, floodx - 1, floody);
		}
		if(house[floodx][floody + 1] == '.' || house[floodx][floody + 1] == '*'){
			if(house[floodx][floody + 1] == '*') *counter += 1;
			house[floodx][floody] = 'P';
			scanhouse(housex, housey, house, counter, floodx, floody + 1);
		} 
		if(house[floodx][floody - 1] == '.' || house[floodx][floody - 1] == '*'){
			if(house[floodx][floody - 1] == '*') *counter += 1;
			house[floodx][floody] = 'P';
			scanhouse(housex, housey, house, counter, floodx, floody - 1);
		} 
}

int main(){
	
	// Declare
		short numcase, sizerow, sizecol;
	
	// Input
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			
			scanf("%hd %hd", &sizerow, &sizecol);
			char house[100][101];
			
			short coorFloodX, coorFloodY;
			for(short j = 0; j < sizerow; j++){
				for(short k = 0; k < sizecol; k++){
					scanf(" %c", &house[j][k]);
					if(house[j][k] == 'P'){
						coorFloodX = j;
						coorFloodY = k;
					}
				}
			}
	
			// Process	
			int tilesFlooded = 0;
			scanhouse(sizerow - 1, sizecol - 1, house, &tilesFlooded, coorFloodX, coorFloodY);
			
			// Output
			printf("Case #%hd: %hd\n", i + 1, tilesFlooded);
		}
	
	return 0;
}
