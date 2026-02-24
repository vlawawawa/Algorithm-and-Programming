#include <stdio.h>

int F(int index){
	if(index == 0) return 0;
	if(index % 2 == 1) return 1;
	if(index % 2 == 0) return F(index - 1) + F(index - 2);
}

int main(){
	
	// Declare
		short index;
		
	// Input, Process, and Output
		scanf("%hd", &index);
		printf("%d\n", F(index));
	
	return 0;
}
