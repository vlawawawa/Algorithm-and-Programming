#include <stdio.h>

int f(int n, int *count){
	
	if(n != 0 && n % 3 == 0)
		*count += 1;
	
	if(n == 0)
		return 1;
	else if(n == 1)
		return 2;
	else if(n % 5 == 0)
		return n * 2;
	else
		return f(n - 1, count) + n + f(n - 2, count) + n - 2;
}

int main(){
	
	// Declare
		int numcase, num;
		
	// Input, Process and Output
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &num);
			
			int count = 0;
			int res = f(num, &count);
			printf("Case #%d: %d %d\n", i + 1, res, count);
		}
			
	
	return 0;
}
