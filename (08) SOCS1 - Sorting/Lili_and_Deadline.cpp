#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	
	char lec[11];
	int dl;
} homework;

//void swap(homework* a, homework* b){
//	
//	homework temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void bubblesort(homework* hw, short size){
//	
//	for(short i = 0; i < size; i++){
//		for(short j = 0; j < size - i; j++){
//			if(hw[j].dl > hw[j + 1].dl) swap(&hw[j], &hw[j + 1]);
//		}
//	}
//	for(short i = 0; i < size; i++){
//		for(short j = 0; j < size - i; j++){
//			if(hw[j].dl == hw[j + 1].dl && strcmp(hw[j].lec, hw[j].lec) > 0) swap(&hw[j], &hw[j + 1]);
//		}
//	}
//}

void sort(short left, short mid, short right, homework* hw){
	
	short l = (mid + 1) - left;
	short r = right - mid;
	
	homework L[l], R[r];
	for(short i = 0; i < l; i++) L[i] = hw[left + i];
	for(short j = 0; j < r; j++) R[j] = hw[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < l && j < r){
		if(L[i].dl < R[j].dl) hw[k] = L[i++];
		else if(L[i].dl == R[j].dl && strcmp(L[i].lec, R[j].lec) < 0) hw[k] = L[i++];
		else hw[k] = R[j++];
		k++;
	}
	
	while(i < l) hw[k++] = L[i++];
	while(j < r) hw[k++] = R[j++]; 
}

void mergesort(short left, short right, homework* hw){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, hw);
	mergesort(mid + 1, right, hw);
	
	sort(left, mid, right, hw);
}

int main(){
	
	// Input
		short numcase;
		scanf("%hd", &numcase);
		homework* hw = (homework* )malloc(sizeof(homework) * numcase);
		for(short i = 0; i < numcase; i++)
			scanf(" %s %d", hw[i].lec, &hw[i].dl);
	
	// Process
//		bubblesort(hw, numcase - 1);
		mergesort(0, numcase - 1, hw);
		
	// Output
		for(short i = 0; i < numcase; i++)
			printf("%s\n", hw[i].lec);
			
		free(hw);
	
	return 0;
}
