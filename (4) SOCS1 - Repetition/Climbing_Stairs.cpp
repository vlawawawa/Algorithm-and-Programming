#include <stdio.h>

int main(){
	
	// Declare
		short numnum;
		int num, index = 0, steps[1000] = {0};
		
	// Input and Process
		scanf("%hd", &numnum);
		for(int i = 1; i <= numnum; i++){
			scanf("%d", &num);
			if(num == i) steps[index]++;
			else{
				numnum -= steps[index++];
				i = 1;
				steps[index]++;
			}
		}
	
	// Output
	for(int i = 0; i <= index; i++){
		printf("%d", steps[i]);
		if(i < index) printf(" ");
	} printf("\n");
	
	return 0;
}
