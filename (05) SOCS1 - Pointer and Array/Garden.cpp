#include <stdio.h>

int main(){
	
	// Declare
		int row, col;
		
	// Input
		scanf("%d %d", &row, &col);
		int garden[row][col];
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				scanf("%d", &garden[i][j]);
			}
		}
		
	// Process
		int newGard, nrow, ncol, nval;
		scanf("%d", &newGard);
		for(int i = 0; i < newGard; i++){
			scanf("%d %d %d", &nrow, &ncol, &nval);
			garden[nrow - 1][ncol - 1] = nval;
		}
		
		
	// Output
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				printf("%d", garden[i][j]);
				if(j < col - 1)
					printf(" ");
			}
			printf("\n");
		}
	
	
	return 0;
}
