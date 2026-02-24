#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dictionary{
	char smol[51];
	char large[51];
};

int main(){
	
	// Open file
		FILE* file = fopen("testdata.in", "r");
		
	// Input dictionary
		short num_dict;
		fscanf(file, "%hd", &num_dict);
		
		struct dictionary* dict = (struct dictionary* )malloc(sizeof(struct dictionary) * num_dict);	
		for(short i = 0; i < num_dict; i++) 
			fscanf(file, " %[^#]#%s", dict[i].smol, dict[i].large);
	
	// Input
		short num_case;
		fscanf(file, "%hd", &num_case);
		
		for(short i = 0; i < num_case; i++){
			char* str = (char* )malloc(sizeof(char) * 100 + 1);
			fscanf(file, " %[^\n]", str);
			
			// Output
			printf("Case #%hd:\n", i + 1);
			char* word = strtok(str, " ");
			bool space = false;
			while(word != NULL){
				bool found = false;
				if(space) printf(" ");
				for(short j = 0; j < num_dict; j++){
					if(!strcmp(word, dict[j].smol)){
						printf("%s", dict[j].large);
						found = true;
						break;
					}
				}
				if(!found) printf("%s", word);
				space = true;
				word = strtok(NULL, " ");
			}
			printf("\n");
			free(str);
		}		
	
	// Close file
		fclose(file);
		free(dict);
	
	return 0;
}
