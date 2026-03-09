#include <stdio.h>

int main(){
	
	// Declare
		short numcase, arrSize;
		
	// Input, Process and Output
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &arrSize);
			int arr[arrSize][arrSize];
			for(int j = 0; j < arrSize; j++){
				for(int k = 0; k < arrSize; k++){
					scanf("%d", &arr[j][k]);
				}
			}
			printf("Case #%d:", i + 1);
			for(int l = 0; l < arrSize; l++){
				int sum = 0;
				for(int o = 0; o < arrSize; o++){
					sum += arr[o][l];
				}
				printf(" %d", sum);
			}
			printf("\n");
		}
		
	
	return 0;
}
