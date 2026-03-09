#include <stdio.h>

int main(){
	
	// Declare
		short numcase, size;
		
	// Input
		scanf("%hd", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%hd", &size);
			int arr[size][size];
			for(int j = 0; j < size; j++){
				for(int k = 0; k < size; k++){
					scanf("%d", &arr[j][k]);
				}
			}
			printf("Case #%d:", i + 1);
			for(int j = 0; j < size; j++){
				int tot = 0;
				for(int k = 0; k < size; k++){
					tot += arr[k][j]; 
				}
				printf(" %d", tot);
			}
			printf("\n");
		}
	
	return 0;
}
