#include <stdio.h>
#include <stdbool.h>

bool canAllocate(int arr[], int n, int students, int maxPages) {
    int allocated = 1;
    int current = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages)
            return false;

        if (current + arr[i] > maxPages) {
            allocated++;
            current = arr[i];

            if (allocated > students)
                return false;
        } else {
            current += arr[i];
        }
    }
    return true;
}

int main() {
    int n, students;
    printf("Enter number of books: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter pages of each book: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter number of students: ");
    scanf("%d", &students);

    int low = 0, high = 0;
    for (int i = 0; i < n; i++) {
        high += arr[i];
    }

    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canAllocate(arr, n, students, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("Minimum possible maximum pages = %d\n", ans);
    return 0;
}
