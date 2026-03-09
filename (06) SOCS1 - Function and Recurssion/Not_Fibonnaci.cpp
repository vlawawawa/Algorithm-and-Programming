#include <stdio.h>

int F(int zero, int one, int index){
	if(index == 0) return zero;
	if(index == 1) return one;
	
	return F(zero, one, index - 1) + F(zero, one, index - 2);
}

int main(){
	
	// Declare
		short zero, one, index;
		
	// Input
		scanf("%hd %hd\n", &zero, &one);
		scanf("%hd", &index);
		
		printf("%d\n", F(zero, one, index));
	
	return 0;
}
