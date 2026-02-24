#include <stdio.h>

int main(){
	
	// Declare
		int jo, li, bi, n, a = 0, jlbtot, avg, ptctot = 0;
		
	// Input
		scanf("%d\n", &n);
			int ptc[n];
		scanf("%d %d %d", &jo, &li, &bi);
			while(a < n){
				scanf("%d", &ptc[a]);
			a++;
			}
		
	// Process
		jlbtot = jo + li + bi;
			for(int i = 0; i < n; i++){
				ptctot += ptc[i];
			} avg = (jlbtot + ptctot) / (3 + n);
		
	// Output
		if(jo >= avg){
			printf("Jojo lolos\n");
		} else{
			printf("Jojo tidak lolos\n");
		}
		if(li >= avg){
			printf("Lili lolos\n");
		} else{
			printf("Lili tidak lolos\n");
		}
		if(bi >= avg){
			printf("Bibi lolos\n");
		} else{
			printf("Bibi tidak lolos\n");
		}
	
	
	return 0;
}
