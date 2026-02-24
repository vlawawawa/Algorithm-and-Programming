#include <stdio.h>

struct string_kocheng{
	short change;
	char str[1001];
};

void read_file(short* numcase, struct string_kocheng sk[]){
	
	FILE* file = fopen("testdata.in", "r");
	
	fscanf(file, "%hd", numcase);
	for(short i = 0; i < *numcase; i++){	
		fscanf(file, "%hd", &sk[i].change);
		fscanf(file, " %[^\n]", sk[i].str);
	}
	
	fclose(file);
}

void rev_numtochar(short numcase, struct string_kocheng sk[]){
	
	for(short i = 0; i < numcase; i++){
		for(short j = 0; sk[i].str[j] != '\0'; j++){
			if(sk[i].str[j] == '0') sk[i].str[j] = 'O';
			else if(sk[i].str[j] == '1') sk[i].str[j] = 'I';
			else if(sk[i].str[j] == '3') sk[i].str[j] = 'E';
			else if(sk[i].str[j] == '4') sk[i].str[j] = 'A';
			else if(sk[i].str[j] == '5') sk[i].str[j] = 'S';
			else if(sk[i].str[j] == '6') sk[i].str[j] = 'G';
			else if(sk[i].str[j] == '7') sk[i].str[j] = 'T';
			else if(sk[i].str[j] == '8') sk[i].str[j] = 'B';	
		}
	}
}

void rev_str(short numcase, struct string_kocheng sk[]){
	
	for(short i = 0; i < numcase; i++){
		for(short j = 0; sk[i].str[j] != '\0'; j++){
			if('A' <= sk[i].str[j] && sk[i].str[j] <= 'Z') sk[i].str[j] -= sk[i].change;
			if(sk[i].str[j] > 'Z' && sk[i].str[j] != ' ') sk[i].str[j] -= 26;
			else if(sk[i].str[j] < 'A' && sk[i].str[j] != ' ') sk[i].str[j] += 26;
		}
	}
}

int main(){
	
	// Declare
		short numcase;
		struct string_kocheng sk[100];
		
	// Read file
		read_file(&numcase, sk);
	
	// Process
		rev_numtochar(numcase, sk);
		rev_str(numcase, sk);
			
	// Output
		for(short i = 0; i < numcase; i++){
			printf("Case #%hd: %s\n", i + 1, sk[i].str);
		}
	
	
	return 0;
}
