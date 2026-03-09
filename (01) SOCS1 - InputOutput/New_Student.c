#include <stdio.h>

int main(){
	
	// Declare
	int age;
	char name[101], nim[9];
	
	// Input
	scanf("%[^\n]", name);
	getchar();
	scanf("%s %d", nim, &age);
	
	// Output
	printf("Name: %s\n", name);
	printf("NIS: %s\n", nim);
	printf("Age: %d\n", age);
	
	return 0;
}
