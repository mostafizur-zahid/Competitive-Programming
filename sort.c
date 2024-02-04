#include <stdio.h>
#include <stdlib.h>

// Structure to hold the set sizes and their types (balls or rattles)
typedef struct {
    int size;
    int type; // 0 for balls, 1 for rattles
} Set;

// Comparator function for qsort
int compare(const void *a, const void *b) {
    Set *setA = (Set *)a;
    Set *setB = (Set *)b;

    if (setA->size == setB->size) {
        // If sizes are the same, sort by type (0 for balls first)
        return setA->type - setB->type;
    }

    return setB->size - setA->size; // Sort in descending order of size
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        Set sets[n + m];

        // Reading ball sizes
        for (int i = 0; i < n; i++) {
            scanf("%d", &sets[i].size);
            sets[i].type = 0; // 0 for balls
        }

        // Reading rattle sizes
        for (int i = n; i < n + m; i++) {
            scanf("%d", &sets[i].size);
            sets[i].type = 1; // 1 for rattles
        }

        // Sorting the sets
        qsort(sets, n + m, sizeof(Set), compare);

        // Printing the sorted sets
        for (int i = 0; i < n + m; i++) {
            printf("%d ", sets[i].size);
        }
        printf("\n");
    }

    return 0;
}
