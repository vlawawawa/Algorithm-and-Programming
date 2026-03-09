#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
	char nim[11];
	char name[21];
};

void sort(short left, short mid, short right, struct student* s){
	
	short sizeL = (mid + 1) - left;
	short sizeR = right - mid;
	
	struct student sLeft[sizeL], sRight[sizeR];
	for(short i = 0; i < sizeL; i++) sLeft[i] = s[left + i];
	for(short j = 0; j < sizeR; j++) sRight[j] = s[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < sizeL && j < sizeR){
		if(strcmp(sLeft[i].nim, sRight[j].nim) < 0) s[k] = sLeft[i++];
		else s[k] = sRight[j++];
		k++;
	}
	
	while(i < sizeL) s[k++] = sLeft[i++];
	while(j < sizeR) s[k++] = sRight[j++];	
}

void mergesort(short left, short right, struct student* s){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, s);
	mergesort(mid + 1, right, s);
	
	sort(left, mid, right, s);
}

int main(){
	
	// Open file
		FILE* file = fopen("testdata.in", "r");
		
	// Input
		short numstud;
		fscanf(file, "%hd", &numstud);
		struct student* student = (struct student*)malloc(sizeof(struct student) * numstud);
		for(short i = 0; i < numstud; i++) fscanf(file, " %s %s", student[i].nim, student[i].name);
		
	// Close file
		fclose(file);
			
	// Process
		mergesort(0, numstud - 1, student);	
		
	// Output
		for(short i = 0; i < numstud; i++) printf("%s %s\n", student[i].nim, student[i].name);
		
		free(student);
	
	return 0;
}
