#include <stdio.h>

int main(){
	
	// Declare
	char name[101];
	
	// Input
	scanf("%[^\n]", name);
	
	// Output
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);
	
	return 0;
}
