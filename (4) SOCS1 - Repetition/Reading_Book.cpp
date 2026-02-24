#include <stdio.h>

int main(){
	
	// Declare
		int numcase, numpage[1000], page[1000], pageturned[1000], initialpage, turningpage;
		
	// Input
		scanf("%d", &numcase);
		int a = 0;
		while(a < numcase){
			scanf("%d %d", &numpage[a], &page[a]);
		a++;
		}
	
	// Process
		for(int i = 0; i < numcase; i++){
			pageturned[i] = 0;
			if((numpage[i] - page[i]) < page[i]){
				if(numpage[i] % 2 == 0){
					turningpage = numpage[i];
				} else{
					turningpage = numpage[i] - 1;
				}
				while(numpage[i] > page[i]){
					if(numpage[i] == turningpage){
						numpage[i] -= 1;
						pageturned[i] += 1;
						turningpage -= 2;
					} else{
						numpage[i] -= 1;
					}
				}
			} else{
				initialpage = 1;
				turningpage = 1;
				while(initialpage < page[i]){
					if(initialpage == turningpage){
						initialpage += 1;
						pageturned[i] += 1;
						turningpage += 2;
					} else{
						initialpage += 1;
					}
				}
			}
		}
	
	// Output
		for(int i = 0; i < numcase; i++){
			printf("Case #%d: %d\n", i + 1, pageturned[i]);
		}
	
	
	return 0;
}
