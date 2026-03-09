#include <stdio.h>

int main(){
	
	// Declare
		int numCase;
		long long digit, ans[100];
		
	// Input and Process
		scanf("%d", &numCase);
		for(int i = 0; i < numCase; i++){
			scanf("%lld", &digit);
			ans[i] = 1;
			while(digit >= 10){
				digit /= 10;
				ans[i]++;
			}
		}
	
	// Output
		for(int i = 0; i < numCase; i++){
			printf("Case #%d: %lld\n", i + 1, ans[i]);
		}
	
	
	return 0;
}
