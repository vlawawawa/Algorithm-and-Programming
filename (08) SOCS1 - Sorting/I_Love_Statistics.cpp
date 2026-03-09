#include <stdio.h>
#include <stdlib.h>

void sort(short left, short mid, short right, double* num){
	
	short l = (mid + 1) - left;
	short r = right - mid;
	
	double L[l], R[r];
	for(short i = 0; i < l; i++) L[i] = num[left + i];
	for(short j = 0; j < r; j++) R[j] = num[(mid + 1) + j];
	
	short i = 0, j = 0, k = left;
	while(i < l && j < r){
		if(L[i] < R[j]) num[k] = L[i++];
		else num[k] = R[j++];
		k++;
	}
	
	while(i < l) num[k++] = L[i++];
	while(j < r) num[k++] = R[j++];
}

void mergesort(short left, short right, double* num){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	mergesort(left, mid, num);
	mergesort(mid + 1, right, num);
	
	sort(left, mid, right, num);
}

int main(){
	
	// Input
		short numcase;
		scanf("%hd", &numcase);
		
		for(short i = 0; i < numcase; i++){
			
			short numnum;
			scanf("%hd", &numnum);
			
			double sum = 0;
			double* num = (double* )malloc(sizeof(double) * numnum);
			for(short j = 0; j < numnum; j++){
				scanf("%lf", &num[j]);
				sum += num[j];
			}
			
			mergesort(0, numnum - 1, num);
			
			printf("Case #%hd:\n", i + 1);
			printf("Mean : %.2lf\n", sum / numnum);
			printf("Median : %.2lf\n", (numnum % 2) ? num[numnum / 2] : (num[(numnum - 1) / 2] + num[numnum / 2]) / 2);
			
			free(num);
		}
	
	return 0;
}
