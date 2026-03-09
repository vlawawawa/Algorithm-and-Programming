#include <stdio.h>

int main(){
	
	// Declare
		int testcase, a = 0;

	// Input
		scanf("%d", &testcase);
			int mieneeded[testcase], mieavail[testcase], miestore[testcase];
		while(a < testcase){
			scanf("%d %d %d", &mieneeded[a], &mieavail[a], &miestore[a]);
		a++;
		}
			
	// Process
		for(int i = 0; i < testcase; i++){
			if(mieneeded[i] <= (mieavail[i] + miestore[i])){
				
	// Output
				printf("Case #%d: yes\n", i + 1);
			} else{
				printf("Case #%d: no\n", i + 1);
			}
		}
	
	
	
	
	return 0;
}
