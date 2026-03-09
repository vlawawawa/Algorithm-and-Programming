#include <stdio.h>

void operation(long long num, short* Jojo){
	
	if(num == 1 && *Jojo % 2 == 0){
		*Jojo = 1;
		return;
	} if(num == 1 && *Jojo % 2 == 1){
		*Jojo = 0;
		return;
	}
	
	*Jojo += 1;
	if(num % 2 == 1){
		num *= 3;
		num += 1;
	} else{
		num /= 2;
	}
	
	operation(num, Jojo);
}

int main(){
	
	// Declare
		int numcase;
		long long num;
		
	// Input, Process, and Output
		scanf("%d", &numcase);
		for(int i = 0; i < numcase; i++){
			scanf("%lld", &num);
			
			short Jojo = 1;
			operation(num, &Jojo);
			
			printf("Case #%d: %s\n", i + 1, (Jojo) ? "Jojo" : "Lili");
		}
	
	return 0;
}
