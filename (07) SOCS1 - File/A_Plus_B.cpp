#include <stdio.h>

void read_file(short* num1, short* num2){
	
	FILE* file = fopen("testdata.in", "r");
	
	fscanf(file, "%hd %hd", num1, num2);
	
	fclose(file);
}

int main(){
	
	// Declare
		short num1, num2;
		
	// Read file
		read_file(&num1, &num2);
		
	// Output
		printf("%hd\n", num1 + num2);
	
	return 0;
}
