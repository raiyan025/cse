// Rotate each 2D matrix layer of a 3D array by k(variable) x 90 degrees
#include <stdio.h>

void rotate90(int row, int col, int matrix[row][col], int k) {
    int times = k % 4; // only 4 unique rotations
    while (times--) {
        int temp[row][col];
        // Transpose + reverse each row to rotate 90 degrees clockwise
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                temp[j][row - 1 - i] = matrix[i][j];

        // Copy back to original matrix
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                matrix[i][j] = temp[i][j];
    }
}

int main() {
    int layer, row, col, k;
    printf("Enter array layer,row and col respectively: ");
    scanf("%d%d%d", &layer, &row, &col);
    int arr[layer][row][col];

    printf("Enter array elements:\n");
    for (int i = 0; i < layer; i++)
        for (int j = 0; j < row; j++)
            for (int l = 0; l < col; l++)
                scanf("%d", &arr[i][j][l]);

    printf("Enter rotation multiplier k (for k x 90 degrees): ");
    scanf("%d", &k);

    // Rotate each 2D layer
    for (int i = 0; i < layer; i++)
        rotate90(row, col, arr[i], k);

    // Print rotated array
    printf("Rotated array:\n");
    for (int i = 0; i < layer; i++) {
        printf("Layer %d:\n", i);
        for (int j = 0; j < row; j++) {
            for (int l = 0; l < col; l++)
                printf("%d ", arr[i][j][l]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
