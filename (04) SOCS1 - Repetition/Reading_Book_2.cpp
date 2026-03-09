#include <stdio.h>

int main() {
    // Declare variables
    int numcase, numpage[1000], page[1000], pageturned[1000];
    
    // Input
    scanf("%d", &numcase);
    for (int a = 0; a < numcase; a++) {
        scanf("%d %d", &numpage[a], &page[a]);
    }
    
    // Process
    for (int i = 0; i < numcase; i++) {
        int turnsfront = page[i] / 2;
        int turnsback = (numpage[i] / 2) - (page[i] / 2);
        pageturned[i] = (turnsfront < turnsback) ? turnsfront : turnsback;
    }
    
    // Output
    for (int i = 0; i < numcase; i++) {
        printf("Case #%d: %d\n", i + 1, pageturned[i]);
    }

    return 0;
}
