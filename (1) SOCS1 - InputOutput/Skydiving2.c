#include <stdio.h>

int main() {
    // Declare
    	char names[2][101]; 
    	float heights[2];    
    	int ages[2];
		int i;       

    // Input
    	scanf("%s %f %d %s %f %d", names[0], &heights[0], &ages[0], names[1], &heights[1], &ages[1]);

	// Constraints
		if ((ages[0] >= 1 && ages[0] <= 100) && (ages[1] >= 1 && ages[1] <= 100) && (heights[0] >= 1.00 && heights[0] <= 300.00) && (heights[1] >= 1.00 && heights[1] <= 300.00)){

    // Output
    	for (i = 0; i < 2; i++){
        	printf("Name %d: %s\n", i + 1, names[i]);
        	printf("Height %d: %.2f\n", i + 1, heights[i]);
        	printf("Age %d: %d\n", i + 1, ages[i]);
    }
}	else {
	return 1;	
}


	return 0;
}

