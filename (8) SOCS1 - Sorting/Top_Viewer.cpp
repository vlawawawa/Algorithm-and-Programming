#include <stdio.h>
#include <stdlib.h>

struct video{	
	char title[1001];
	char maker[1001];
	int views;
};

short size(FILE* f){
	
	struct video v;
	
	short counter = 0;
	while(fscanf(f, " %[^#]#%[^#]#%d", v.title, v.maker, &v.views) == 3) counter++;
	rewind(f);
	
	return counter;
}

void sort(short left, short mid, short right, struct video* v){
	
	short sL = (mid + 1) - left;
	short sR = (right + 1) - (mid + 1);
	
	struct video L[sL], R[sR];
	for(short i = 0; i < sL; i++) L[i] = v[left + i];
	for(short j = 0; j < sR; j++) R[j] = v[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < sL && j < sR){
		if(L[i].views > R[j].views) v[k] = L[i++];
		else v[k] = R[j++];
		k++;
	}
	
	while(i < sL) v[k++] = L[i++];
	while(j < sR) v[k++] = R[j++];
}

void mergesort(short left, short right, struct video* info){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, info);
	mergesort(mid + 1, right, info);
	
	sort(left, mid, right, info);
}

int main(){
	
	// Open file
		FILE* file = fopen("testdata.in", "r");	
		
	// Input
		short file_size = size(file);
		struct video* info = (struct video*)malloc(sizeof(struct video) * file_size);
		for(short i = 0; i < file_size; i++) fscanf(file, " %[^#]#%[^#]#%d", info[i].title, info[i].maker, &info[i].views);
		
	// Close file	
		fclose(file);
		
	// Process
		mergesort(0, file_size - 1, info);
		
	// Output
		for(short i = 0; i < file_size; i++) printf("%s by %s - %d\n", info[i].title, info[i].maker, info[i].views);		
		
		free(info);
	
	return 0;
}
