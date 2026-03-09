#include <stdio.h>
#include <string.h>

struct full_name{
	char first_name[41];
	char last_name[41];
};

struct names{
	char name[41];
};

void read_case(FILE* file, short* numcase, struct names n[]){
	
	fscanf(file, "%hd", numcase);	
	for(short i = 0; i < *numcase; i++){
		fscanf(file, " %[^\n]", n[i].name);
	}
}

void read_file(short* numname, struct full_name fn[], short* numcase, struct names n[]){
	
	FILE* file = fopen("testdata.in", "r");
 	
	fscanf(file, "%hd", numname);	
	for(short i = 0; i < *numname; i++){
		fscanf(file, " %[^#]#%[^\n]", fn[i].first_name, fn[i].last_name);
	}
	read_case(file, numcase, n);
		
	fclose(file);
}


short check_name(char name[], struct full_name fn[], short numname){
	
	for(short i = 0; i < numname; i++){
		if(!strcmp(name, fn[i].first_name)) return i;
	}
	return -1;
}

int main(){
	
	// Declare
		short numname, numcase;
		struct full_name fn[100];
		struct names n[100];
	
	// Read File
		read_file(&numname, fn, &numcase, n);

	// Process and Output
		for(short i = 0; i < numcase; i++){
			short index = check_name(n[i].name, fn, numname);
			printf("Case #%hd: %s\n", i + 1, (index >= 0) ? fn[index].last_name : "N/A");
		}
	
	
	return 0;
}
