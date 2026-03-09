#include <stdio.h>

struct process{
	short col;
	short icepercol[100];
};

void read_file(short* numcase, struct process p[]){
	
	FILE* file = fopen("testdata.in", "r");
	
	fscanf(file, "%hd", numcase);
	for(short i = 0; i < *numcase; i++){
		fscanf(file, "%hd", &p[i].col);
		for(short j = 0; j < p[i].col; j++){	
			fscanf(file, "%hd", &p[i].icepercol[j]);
		}	
	}
	
	fclose(file);
}

void calc_perimeter(int* perimeter, struct process p){
	
	*perimeter = 0;
	int nempel = 0;	
	for(short i = 0; i < p.col; i++){
		*perimeter += (p.icepercol[i] * 4 + 4);
		if(i > 0){
			if(p.icepercol[i - 1] - p.icepercol[i] > 0) nempel += (p.icepercol[i] * 4);
			else if(p.icepercol[i - 1] - p.icepercol[i] < 0) nempel += (p.icepercol[i - 1] * 4);
			else nempel += (p.icepercol[i] * 4);
		}
	}
	*perimeter -= nempel;
}

void calc_area(int* area, struct process p){
	
	*area = 0;
	for(short i = 0; i < p.col; i++){
		*area += (4 * p.icepercol[i]);
	}
}

int main(){
	
	// Declare
		short numcase;
		int perimeter, area;
		struct process p[100];
		
	// Read file
		read_file(&numcase, p);
		
	// Process and Output
		for(short i = 0; i < numcase; i++){
			calc_perimeter(&perimeter, p[i]);
			calc_area(&area, p[i]);
			printf("Case #%hd: %d %d\n", i + 1, perimeter, area);
		}
	
	return 0;
}
