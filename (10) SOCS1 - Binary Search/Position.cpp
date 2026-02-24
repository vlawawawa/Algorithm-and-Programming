#include <stdio.h>
#include <stdlib.h>

void sort(int left, int mid, int right, int* arr){
	
	int l = (mid + 1) - left;
	int r = right - mid;
	
	int L[l], R[r];
	for(int i = 0; i < l; i++) L[i] = arr[left + i];
	for(int j = 0; j < r; j++) R[j] = arr[(mid + 1) + j];
	
	int i = 0, j = 0, k = left;
	while(i < l && j < r){
		if(L[i] < R[j]) arr[k] = L[i++];
		else arr[k] = R[j++];
		k++;
	}
	
	while(i < l) arr[k++] = L[i++];
	while(j < r) arr[k++] = R[j++];
}

void mergesort(int left, int right, int* arr){
	
	if(left >= right) return;
	
	int mid = left + (right - left) / 2;
	
	mergesort(left, mid, arr);
	mergesort(mid + 1, right, arr);
	
	sort(left, mid, right, arr);
}

int findIndex(int left, int right, int search, int* arr){
	
	while(left <= right){
		
		int mid = left + (right - left) / 2;
		
		if(search == arr[mid]) return mid;
		else if(search > arr[mid]) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main(){
	
	// Input
		int sizeArr, sizeSolu;
		scanf("%d %d", &sizeArr, &sizeSolu);
		
		int* arr = (int* )malloc(sizeof(int) * sizeArr);
		int* solu = (int* )malloc(sizeof(int) * sizeSolu);
		
		for(int i = 0; i < sizeArr; i++)
			scanf("%d", &arr[i]);
			
		mergesort(0, sizeArr - 1, arr);
			
		for(int i = 0; i < sizeSolu; i++)
			scanf("%d", &solu[i]);
			
		int i = 0;
		while(i < sizeSolu){
			int index = findIndex(0, sizeArr - 1, solu[i++], arr);
			printf("%d\n", index + 1);
		} 
			
		free(arr);
		free(solu);	
		
	
	return 0;
}
