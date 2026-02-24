#include <stdio.h>
#include <stdlib.h>

struct city_temp{
	char city[1001];
	double temp;
	char temp_scale;
};

short size(FILE* f){
	
	struct city_temp ct;
	
	short counter = 0;
	while(fscanf(f, " %[^#]#%lf#%c", ct.city, &ct.temp, &ct.temp_scale) == 3) counter++;
	
	rewind(f);
	
	return counter;
}

void swap(struct city_temp* a, struct city_temp* b){
	
	struct city_temp temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(short size, struct city_temp* ct){
	
	double temp_C1, temp_C2;
	for(short i = 0; i < size; i++){
		for(short j = 0; j < size - i; j++){
			if(ct[j].temp_scale == 'F') temp_C1 = (ct[j].temp - 32) * (5.0 / 9);
			else temp_C1 = ct[j].temp;
			
			if(ct[j + 1].temp_scale == 'F') temp_C2 = (ct[j + 1].temp - 32) * (5.0 / 9);
			else temp_C2 = ct[j + 1].temp;
			
			if(temp_C1 > temp_C2) swap(&ct[j], &ct[j + 1]);
		}
	}
}

int main(){
	
	// Open file
		FILE* file = fopen("testdata.in", "r");
		
	// Input
		short file_size = size(file);
		struct city_temp* info = (struct city_temp*)malloc(sizeof(struct city_temp) * file_size);
		for(short i = 0; i < file_size; i++) fscanf(file, " %[^#]#%lf#%c", info[i].city, &info[i].temp, &info[i].temp_scale);
		
	// Close file
		fclose(file);
		
	// Process
		bubblesort(file_size - 1, info);
		
	// Output
		for(short i = 0; i < file_size; i++) printf("%s is %.2lf%c\n", info[i].city, info[i].temp, info[i].temp_scale);
		
		free(info);
	
	return 0;
}
