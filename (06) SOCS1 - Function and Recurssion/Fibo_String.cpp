#include <stdio.h>
#include <string.h>

char *F(char str[], char zero[], char one[], int index){
	if(index == 0)
		return strcpy(str, zero);
	if(index == 1)
		return strcpy(str, one); 
	
	char temp1[10000] = {0}, temp2[10000] = {0};
	F(temp1, zero, one, index - 1);
	F(temp2, zero, one, index - 2);
	strcpy(str, temp1);
	strcat(str, temp2);
	return str;
}

int main(){
	
	// Declare
		short numcase, index;
		char zero[2], one[2];
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			char str[100000] = {0};
			scanf("%hd %s %s", &index, &zero, &one);
			printf("Case #%hd: %s\n", i + 1, F(str, zero, one, index));
		}
	
	return 0;
}
