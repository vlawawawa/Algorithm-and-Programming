#include <stdio.h>
#include <string.h>

struct process{
	char str[101];
	short nump;
	char bfr[27];
	char afr[27];
	int alphabetcounter[26];
};

void read_file(struct process p[], short* numcase){
	
	FILE* file = fopen("testdata.in", "r");
	
	fscanf(file, "%hd", numcase);
	for(short i = 0; i < *numcase; i++){
		fscanf(file, "%s", p[i].str);
		fscanf(file, "%hd", &p[i].nump);
		for(short j = 0; j < p[i].nump; j++){
			fscanf(file, " %c %c", &p[i].bfr[j], &p[i].afr[j]);
		}
	}
	
	fclose(file);
}

void processing(short numcase, struct process p[]){
		
	for(short i = 0; i < numcase; i++){
		short alphabet[26] = {0};
		char newstr[101];
		strcpy(newstr, p[i].str);
		for(short k = 0; k < p[i].nump; k++){
			for(short j = 0; p[i].str[j] != '\0'; j++){
				if(newstr[j] == p[i].bfr[k] && alphabet[p[i].bfr[k] - 'A'] == 0){
					newstr[j] = p[i].afr[k];
				}
			}
			alphabet[p[i].bfr[k] - 'A']++;
		}
		for(short j = 0; p[i].str[j] != '\0'; j++){
			p[i].alphabetcounter[newstr[j] - 'A']++;
		} 
	}
}

int main(){
	 
	// Declare
		short numcase;
		struct process p[100];
		
	// Read file
		read_file(p, &numcase);
		
	// Process
		for(short i = 0; i < 100; i++){
    		for(short j = 0; j < 26; j++){
    			p[i].alphabetcounter[j] = 0;
			}
		}
		processing(numcase, p);
		
	// Output
		for(short i = 0; i < numcase; i++){
			for(short j = 0; j < 26; j++){
				if(p[i].alphabetcounter[j] > 0) printf("%c %hd\n", j + 'A', p[i].alphabetcounter[j]);
			}
		}
		
	
	return 0;
}
