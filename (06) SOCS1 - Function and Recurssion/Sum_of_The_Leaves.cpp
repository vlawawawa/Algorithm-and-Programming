#include <stdio.h>

// Process and Output
void branch(int tree[], int arrSize, int index, int sum){
	if(index > arrSize) // kalau index > size berarti branchnya sudah habis
		return;
		
	sum += tree[index];
	
	// base case: kalau udah gapunya cabang ngeprint hasilnya
	if(2 * index > arrSize && 2 * index + 1 > arrSize){
		printf("%d\n", sum);
		return;
	}
	
	// ke kiri
	branch(tree, arrSize, 2 * index, sum);
	// ke kanan
	branch(tree, arrSize, 2 * index + 1, sum);
}

int main(){
	
	// Declare
		int numcase;
		
	// Input
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			int arrSize;
			scanf("%d", &arrSize);
			int tree[arrSize + 1];
			for(int j = 1; j <= arrSize; j++){
				scanf("%d", &tree[j]);
			}
			
			printf("Case #%d:\n", i + 1);
			branch(tree, arrSize, 1, 0);
		}
		
	return 0;
}
