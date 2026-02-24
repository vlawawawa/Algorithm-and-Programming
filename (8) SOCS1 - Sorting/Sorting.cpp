#include <stdio.h>

void sort(int left, int mid, int right, int arr[]){
	
 	// Step 1: Buat besar array kiri(n1) dan kanan(n2)
		int n1 = (mid + 1) - left;
		int n2 = right - mid;
	
	// Step 2: Isi array kiri dan array kanan
		int L[n1], R[n2];
		for(int i = 0; i < n1; i++) L[i] = arr[left + i];	
		for(int j = 0; j < n2; j++) R[j] = arr[(mid + 1) + j];
	
	// Step 3
		int i = 0, j = 0, k = left;
		while(i < n1 && j < n2){
			if(L[i] < R[j]) arr[k] = L[i++];
			else arr[k] = R[j++];
			k++;
		}	
	
	// Step 4: pindah"in data yang masih sisa
		while(i < n1) arr[k++] = L[i++];	
		while(j < n2) arr[k++] = R[j++];
}

void mergesort(int left, int right, int arr[]){
	
	// Basecase
		if(left >= right) return;
		
	// Isi
		int mid = left + (right - left) / 2;
		
		mergesort(left, mid, arr);
		mergesort(mid + 1, right, arr);
		
		sort(left, mid, right, arr);
}

int main(){
	
	// Input
		int n;
		scanf("%d", &n);
		
		int arr[n];
		for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
		mergesort(0, n - 1, arr);
		
		int max = -1;
		for(int i = 1; i < n; i++){
			if(arr[i] - arr[i - 1] > max){
				max = arr[i] - arr[i - 1];
			} 
		}
		bool printspace = false;
		for(int i = 1; i < n; i++){
			if(arr[i] - arr[i - 1] == max){
				if(printspace) printf(" ");
				printf("%d %d", arr[i - 1], arr[i]);
				printspace = true;
			}
		}
		
		printf("\n");
	
	return 0;
}
