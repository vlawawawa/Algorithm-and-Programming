#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char* a, char *b){
	
	char temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	// Declare
		char str[101];
	
	// Input
		scanf("%[^\n]", str);
		
	// Process
		short len = strlen(str);
		for(short i = 0, j = len - 1; i < len; i++, j--){ // Reverse string
			if(i > j) break;
			swap(&str[i], &str[j]);
		}
		for(short i = 0; i < len; i++){ // (Upper -> Lower && Lower -> Upper) the string
			if(isupper(str[i])) str[i] = tolower(str[i]);
			else if(islower(str[i])) str[i] = toupper(str[i]);
		}
		
	// Output
		printf("%s\n", str);

		
	return 0;
}
