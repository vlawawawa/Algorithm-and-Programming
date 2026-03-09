#include <stdio.h>
#include <stdlib.h>

void sort(short left, short mid, short right, int* arr){
	
	short l = (mid + 1) - left;
	short r = right - mid;
	
	int L[l], R[r];
	for(short i = 0; i < l; i++) L[i] = arr[left + i];
	for(short j = 0; j < r; j++) R[j] = arr[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < l && j < r){
		if(L[i] < R[j]) arr[k] = L[i++];
		else arr[k] = R[j++];
		k++;
	}
	
	while(i < l) arr[k++] = L[i++];
	while(j < r) arr[k++] = R[j++];
}

void mergesort(short left, short right, int* arr){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, arr);
	mergesort(mid + 1, right, arr);
	
	sort(left, mid, right, arr);
}

void findmax(int* max1, int* max2, int* stud, short col){
	
	for(short i = 0; i < col - 1; i++){
		if(i + 1 < col / 2 && stud[i + 1] - stud[i] > *max1) *max1 = stud[i + 1] - stud[i];
		if(i >= col / 2 && stud[i + 1] - stud[i] > *max2) *max2 = stud[i + 1] - stud[i];
	}
}

int main(){
	
	// Input
		short numcase;	
		scanf("%hd", &numcase);
		for(short i = 0; i < numcase; i++){
			
			short col;
			scanf("%hd", &col);
			int* stud = (int* )malloc(sizeof(int) * col);	
			
			for(short j = 0; j < col; j++)
				scanf("%d", &stud[j]);
			
			mergesort(0, col - 1, stud);
			
			int max1 = -1, max2 = -1;
			findmax(&max1, &max2, stud, col);
			
			printf("Case #%hd: %d\n", i + 1, (max1 > max2) ? max1 : max2);
			
			free(stud);
		}
	
	return 0;
}
