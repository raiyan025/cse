//Find the number occuring even and odd number of times seperately

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int counted[n]; // array to mark counted elements
    for (int i = 0; i < n; i++)
        counted[i] = 0;

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (counted[i]) // already counted
            continue;

        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                counted[j] = 1; // mark as counted
            }
        }

        if (freq % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Numbers occurring even number of times: %d\n", evenCount);
    printf("Numbers occurring odd number of times: %d\n", oddCount);
}