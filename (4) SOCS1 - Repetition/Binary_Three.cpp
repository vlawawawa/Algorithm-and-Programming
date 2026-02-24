#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numnums[50], nums[100], xor1[50] = {0}, xor0[50] = {0}, xorres, nolsatu;
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &numnums[i]);
			for(int j = 0; j < numnums[i]; j++){
				scanf("%d", &nums[j]);
			}
	
	// Process
			for(int k = 0; k < numnums[i]; k++){
				for(int l = k + 1; l < numnums[i]; l++){
					int biner[2] = {0};
					xorres = nums[k] ^ nums[l];
					while(xorres > 0){
						nolsatu = xorres % 2;
						biner[nolsatu]++;
						xorres /= 2;
					}
					if(biner[1] >= 3)
						xor1[i]++;
					else
						xor0[i]++;
				}
			}
		}
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %d %d\n", i + 1, xor1[i], xor0[i]);
		}
	
	
	return 0;
}
