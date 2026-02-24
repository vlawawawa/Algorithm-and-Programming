#include <stdio.h>
#include <string.h>

struct full_name{
	char first_name[41];
	char last_name[41];
};

int main(){
	
	// Declare
		short numname, numcase;
		char name[41];
		struct full_name fn[100];
	
	// Read File
		FILE* file = fopen("testdata.in", "r");
 	
		fscanf(file, "%hd", &numname);	
		for(short i = 0; i < numname; i++){
			fscanf(file, " %[^#]#%[^\n]", fn[i].first_name, fn[i].last_name);
		}
		
		fclose(file);
		
	// Input, Process, and Output
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			scanf(" %[^\n]", name);
			short index = -1;
			for(short j = 0; j < numname; j++){
				short counter = 0;
				short len = strlen(fn[j].first_name);
				for(short k = 0; k < len; k++){
					if(name[k] == fn[j].first_name[k]) counter++;
				}
				if(counter == len) index = j;
			}
			printf("Case #%hd: %s\n", i + 1, (index >= 0) ? fn[index].last_name : "N/A");
		}
	
	
	return 0;
}
