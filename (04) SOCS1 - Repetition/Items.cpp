#include <stdio.h>

int main(){
	
	// Declare
		int numcase, cas3[100], a[100];
		long long int item[100][100], totitem[100];
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &cas3[i]);
			while(a[i] < cas3[i]){
				scanf("%lld", &item[i][a[i]]);
			a[i]++;
			}	
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			for(int j = 0; j < cas3[i]; j++){
				totitem[i] += item[i][j];
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %lld\n", i + 1, totitem[i]);
		}
	
	
	return 0;
}
