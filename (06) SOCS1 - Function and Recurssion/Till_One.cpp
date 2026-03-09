#include <stdio.h>

int tillOne(int num){
	if(num == 1)
		return 1;
	else if(num % 2 == 0)
		return tillOne(num / 2);
	else
		return tillOne(num - 1) + tillOne(num + 1);
}

int main(){
	
	// Declare
		int numcase, num, res;
		
	// Input, Process, and Output
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%d", &num);
			res = tillOne(num);
			printf("Case #%d: %d\n", i + 1, res);
		}
	
	
	return 0;
}
