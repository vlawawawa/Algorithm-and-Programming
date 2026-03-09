#include <stdio.h>

int main(){
	
	// Declare
		short numcase, size;
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			scanf("%hd", &size);
			int arr[size][size];
			
			for(short j = 0; j < size; j++){
				for(short k = 0; k < size; k++){
					scanf("%d", &arr[j][k]);
				}
			}
			
			printf("Case #%hd:", i + 1);
			for(short j = 0; j < size; j++){
				long long res = 0;
				for(short k = 0; k < size; k++){
					res += arr[k][j];
				}
				printf(" %lld", res);
			}
			printf("\n");		
		}
	
	
	return 0;
}
