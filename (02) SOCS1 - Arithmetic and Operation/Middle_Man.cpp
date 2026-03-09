#include <stdio.h>

int main(){
	
	// Declare
		char num[3][4];
		int a = 0;	
	
	// Input
		while(a < 3){
			scanf("%s", num[a]);
				while(getchar() != '\n');
		a++;
		}
	
	// Output
		for(int i = 0; i < 3; i++){
			printf("%c\n", num[i][1]);
		}
	
	
	return 0;
}
