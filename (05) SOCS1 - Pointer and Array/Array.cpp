#include <stdio.h>

int main(){
	
	// Declare
		short sizeArr, valueArr;
		
	// Input and Process
		scanf("%hd", &sizeArr);
			short arr[sizeArr], index[sizeArr];
		for(int i = 0; i < sizeArr; i++){
			scanf("%hd", &index[i]);
		}
		for(int i = 0; i < sizeArr; i++){
			scanf("%hd", &valueArr);
			for(int j = 0; j < sizeArr; j++){
				if(index[i] == j){
					arr[j] = valueArr;
				}
			}
		}
			
	// Output
		for(int i = 0; i < sizeArr; i++){
			printf("%hd", arr[i]);
			if(i < sizeArr - 1)
				printf(" ");
		} printf("\n");
	
	
	return 0;
}
