#include <stdio.h>
#include <limits.h>

// Possible knight moves
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

// Check if a position is within bounds
int isValid(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

// Recursive function to find the minimum moves without memoization
int minKnightMoves(int x1, int y1, int x2, int y2, int depth, int maxDepth) {
    // Base case: if we reach the destination, return the depth (number of moves taken)
    if (x1 == x2 && y1 == y2) return depth;

    // If we exceed the maximum depth, return an invalid result
    if (depth >= maxDepth) return INT_MAX;

    int minMoves = INT_MAX;

    // Explore all possible knight moves
    for (int i = 0; i < 8; i++) {
        int nx = x1 + dx[i];
        int ny = y1 + dy[i];

        if (isValid(nx, ny)) {
            int moves = minKnightMoves(nx, ny, x2, y2, depth + 1, maxDepth);
            if (moves < minMoves) minMoves = moves;
        }
    }

    return minMoves;
}

// Iterative deepening approach to limit recursion depth
int findMinKnightMoves(int x1, int y1, int x2, int y2) {
    for (int maxDepth = 1; maxDepth <= 64; maxDepth++) {
        int result = minKnightMoves(x1, y1, x2, y2, 0, maxDepth);
        if (result != INT_MAX) return result;
    }
    return -1; // Should never happen on a valid chessboard
}

int main() {
    // Input number of test cases
    short numcase;
    scanf("%hd", &numcase);

    // Process each test case
    for (short i = 0; i < numcase; i++) {
        // Input starting and ending positions
        char x_sc, x_ec;
        short y_start, y_end;
        scanf(" %c%hd %c%hd", &x_sc, &y_start, &x_ec, &y_end);

        // Convert input to 0-based indexing
        int x_start = x_sc - 'A';
        int y_start_0 = y_start - 1;
        int x_end = x_ec - 'A';
        int y_end_0 = y_end - 1;

        // Calculate the minimum knight moves
        int move = findMinKnightMoves(x_start, y_start_0, x_end, y_end_0);

        // Output the result
        printf("Case #%hd: %d\n", i + 1, move);
    }

    return 0;
}

