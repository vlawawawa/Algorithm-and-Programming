#include <stdio.h>

int sumArr(int arr[], int arrSize, int index){
	if(index >= arrSize)
		return 0;
	
	return arr[index] + sumArr(arr, arrSize, index + 1);
}

int main(){
	
	// Declare
		int numcase;
		
	// Input, Process, and Output
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			int arrSize;
			scanf("%d", &arrSize);
			
			int arr[arrSize];
			for(int j = 0; j < arrSize; j++){
				scanf("%d", &arr[j]);
			}
			
			int res = sumArr(arr, arrSize, 0);
			printf("Case #%d: %d\n", i + 1, res);
		}
	
	// Process
		
	
	// Output
		
	
	
	return 0;
}
