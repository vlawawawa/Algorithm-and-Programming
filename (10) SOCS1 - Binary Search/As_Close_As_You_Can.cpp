#include <stdio.h>

int binarysearch(long long val, int left, int right, long long sum[]){
	
	if(val > sum[right]) return right + 1;
 	if(val < sum[left]) return -1;
	
	while(left <= right){
		int mid = left + (right - left) / 2;
		
		if(val == sum[mid]) return mid + 1;
		else if(val > sum[mid]){
			if(val < sum[mid + 1]) return mid + 1;
			left = mid + 1;
		} else if (val < sum[mid]){
			if(val > sum[mid - 1]) return mid;
			right = mid - 1;
		}
	}
}

int main(){
	
	// Declare
		int n;
		scanf("%d", &n);
		long long arr[n], sum[n];
	
	// Input
		for(int i = 0; i < n; i++) scanf("%lld", &arr[i]);
		
		sum[0] = arr[0];
		for(int i = 0; i < n; i++) if(i != 0)sum[i] = arr[i] + sum[i - 1];
		
		int tc;
		scanf("%d", &tc);
		for(int i = 0; i < tc; i++){
			long long val;
			scanf("%lld", &val);
			
			int index = binarysearch(val, 0, n-1, sum);
			
			printf("Case #%d: %d\n", i + 1, index);
		} 
	
	
	return 0;
}
