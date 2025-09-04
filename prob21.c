//Print and count all unique elements in an array

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0;
    printf("Unique elements are: ");
    
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        // Check if arr[i] appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            // Check if arr[i] appears later
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    isUnique = 0;
                    break;
                }
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nNumber of unique elements: %d\n", count);

    return 0;
}
