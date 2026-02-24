#include <stdio.h>

int main(){
	
	// Declare
		short size, dup = 0;
		
	// Input and Process
		scanf("%hd", &size);
		short arr[size][size];
		for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				scanf("%hd", &arr[i][j]);
			}
		}
			for(int k = 0; k < size; k++){
				short counter1[101] = {0}, counter2[101] = {0};
				for(int l = 0; l < size; l++){
					if(++counter1[arr[k][l]] > 1 || ++counter2[arr[l][k]] > 1){
						dup = 1;
						break;
					}
				}
				if(dup) break;
			}
		
	// Output
		printf("%s\n", (dup) ? "Nay" : "Yay");
		
	
	
	return 0;
}
