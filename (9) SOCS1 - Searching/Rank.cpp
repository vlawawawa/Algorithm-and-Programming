#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
	
	char name[11];
	short value;
};

void sort(short left, short mid, short right, struct student* s){
	
	short l = (mid + 1) - left;
	short r = right  - mid;
	
	struct student L[l], R[r];
	for(short i = 0; i < l; i++) L[i] = s[left + i];
	for(short j = 0; j < r; j++) R[j] = s[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < l && j < r){
		short detector = 0;
		if(L[i].value > R[j].value) s[k] = L[i++];
		else if(L[i].value == R[j].value) detector = strcmp(L[i].name, R[j].name);
		else s[k] = R[j++];
		
		if(detector < 0) s[k] = L[i++];
		else if(detector > 0) s[k] = R[j++];
		k++;
	}
	
	while(i < l) s[k++] = L[i++];
	while(j < r) s[k++] = R[j++];
}

void mergesort(short left, short right, struct student* s){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, s);
	mergesort(mid + 1, right, s);
	
	sort(left, mid, right, s);
}

int main(){
	
	// Input
		short numcase;
		scanf("%hd", &numcase);
		
		for(short i = 0; i < numcase; i++){
			
			short numstud;
			scanf("%hd", &numstud);
			
			struct student* s = (struct student* )malloc(sizeof(struct student) * numstud);
			for(short j = 0; j < numstud; j++)
				scanf(" %[^#]#%hd", s[j].name, &s[j].value);
			
			// Process	
			mergesort(0, numstud - 1, s);
			
			// Input
			char find[11];
			scanf(" %s", find);
			
			// Output
			short rank = 0;
			while(strcmp(find, s[rank].name)) rank++;
			printf("Case #%hd: %hd\n", i + 1, rank + 1);
			
			free(s);
		} 
	
	return 0;
}
