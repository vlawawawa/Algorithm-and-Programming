#include <stdio.h>
#include <stdlib.h>

void swap(short* a, short* b, int* c){
	
	short temp = *a;
	*a = *b;
	*b = temp;
	*c += 1;
}

void bubblesort(short n, short t[], int* c){
	
	for(short i = 0; i < n; i++){
		for(short j = 0; j < n - i; j++){
			if(t[j] > t[j + 1]) swap(&t[j], &t[j + 1], c);
		}
	}
}

int main(){
	
	// Input
		short numcase;
		scanf("%hd", &numcase);
		
		for(short i = 0; i < numcase; i++){
		
			short numcarriage;
			int multiplythis;
			scanf("%hd %d", &numcarriage, &multiplythis);
			
			short* train = (short* )malloc(sizeof(short) * numcarriage);
			for(short j = 0; j < numcarriage; j++)
				scanf("%hd", &train[j]);
			
			int counter = 0;
			bubblesort(numcarriage - 1, train, &counter);
			
			printf("Case #%hd: %d\n", i + 1, counter * multiplythis);
			
			free(train);
		}
	
	return 0;
}
