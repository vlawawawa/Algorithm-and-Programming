#include <stdio.h>

int main(){
	
	// Declare
		int ncase, tri[100];
		
	// Input
		scanf("%d", &ncase);
		for(int i = 0; i < ncase; i++){
			scanf("%d", &tri[a]);
		}
	
	// Process and Output
		for(int i = 0; i < ncase; i++){ // for (i) = for how much cases
			printf("Case #%d:\n", i + 1);
			if(tri[i] % 2 == 1){ // to check if tri is odd
				for(int j = 0; j < tri[i]; j++){ // for (j) = for rows
					for(int k = 0; k < tri[i]; k++){ // for (k) = for columns
						if(k < tri[i] - (1 + j)){ // for spacing
							printf(" ");
						}
					}
					for(int l = 0; l <= j; l++){ // for (l) = for printing triangle in a pattern
						if(l % 2 == 0){
							printf("*");
						} else{
							printf("#");
						}
					}
					printf("\n");
				}
			} else{ // to check if tri is even
				for(int m = 0; m < tri[i]; m++){
					for(int n = 0; n < tri[i]; n++){
						if(n < tri[i] - (1 + m)){
							printf(" ");
						}
					}
					for(int o = 0; o <= m; o++){
						if(o % 2 == 0){
							printf("#");
						} else{
							printf("*");
						}
					}
					printf("\n");
				}
			}
		}

	
	
	return 0;
}
