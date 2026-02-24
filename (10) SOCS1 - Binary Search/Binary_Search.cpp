#include <stdio.h>

long long sum_of_squares(long long N) {
    return (N * (N + 1) * (2 * N + 1)) / 6;
}

long long binarysearch(long long target, long long right) {
    long long left = 1;  

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long hasil = sum_of_squares(mid);

        if (hasil < target) {
            left = mid + 1;  
        } else if (hasil >= target) {
            right = mid - 1;  
        }
    }

    return left;
}

int main() {
    int test;
    scanf("%d", &test);

    long long m;
    for (int i = 1; i <= test; i++) {
        scanf("%lld", &m);
        
        long long hasil = binarysearch(m, 2000000);
        printf("Case #%d: %lld\n", i, hasil);
    }

    return 0;
}

