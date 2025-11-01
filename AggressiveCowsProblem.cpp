#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Comparator for sorting
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Check if cows can be placed with minimum distance 'mid'
bool canPlaceCows(int stalls[], int n, int cows, int mid) {
    int placed = 1;        // First cow placed at first stall
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= mid) {
            placed++;
            lastPos = stalls[i];
            if (placed == cows)
                return true;
        }
    }
    return false;
}

int main() {
    int n, cows;
    printf("Enter number of stalls: ");
    scanf("%d", &n);

    int stalls[n];
    printf("Enter stall positions: ");
    for (int i = 0; i < n; i++) scanf("%d", &stalls[i]);

    printf("Enter number of cows: ");
    scanf("%d", &cows);

    // Sort stall positions
    qsort(stalls, n, sizeof(int), cmp);

    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canPlaceCows(stalls, n, cows, mid)) {
            ans = mid;
            low = mid + 1;   // try to maximize the distance
        } else {
            high = mid - 1;
        }
    }

    printf("Maximum minimum distance = %d\n", ans);
    return 0;
}
