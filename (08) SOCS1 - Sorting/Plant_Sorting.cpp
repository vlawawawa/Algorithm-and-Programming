#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{	

	int code;
	char plant_name[41];
} data;

void sort(short left, short mid, short right, data* d){
	
	short n1 = (mid + 1) - left;
	short n2 = right - mid;
	
	data tempL[n1];
	data tempR[n2];
	for(short i = 0; i < n1; i++) tempL[i] = d[left + i];
	for(short j = 0; j < n2; j++) tempR[j] = d[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < n1 && j < n2){
		if(strcmp(tempL[i].plant_name, tempR[j].plant_name) < 0) d[k] = tempL[i++];
		else d[k] = tempR[j++];
		k++;
	}
	
	while(i < n1) d[k++] = tempL[i++];
	while(j < n2) d[k++] = tempR[j++]; 
}

void mergesort(short left, short right, data* d){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, d);
	mergesort(mid + 1, right, d);
	
	sort(left, mid, right, d);
}

int main(){
	
	// Open file
		FILE* file = fopen("testdata.in", "r");
	
	// Input
		short numplant;
		fscanf(file, "%hd", &numplant);
		data* d = (data* )malloc(sizeof(data) * numplant);
		for(short i = 0; i < numplant; i++){
			fscanf(file, "%d#%[^\n]", &d[i].code, d[i].plant_name);
		} 
	
	// Close file
		fclose(file);
	
	// Process
		mergesort(0, numplant - 1, d);
		
	// Output
		for(short i = 0; i < numplant; i++) printf("%d %s\n", d[i].code, d[i].plant_name);

		free(d);
	
	return 0;
}
