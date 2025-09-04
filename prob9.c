// Find the sum of Diagonal elements in a cubic array
#include <stdio.h>

int main()
{
    int layer, row, col;
    printf("Enter array layer,row and col respectively: ");
    scanf("%d%d%d", &layer, &row, &col);

    if (layer != row || row != col) {
        printf("Array must be cubic to find the main diagonal.\n");
        return 1;
    }

    int arr[layer][row][col];
    printf("Enter array elements:\n");
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("The array elements are:\n");
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < layer; i++)
    {
        sum += arr[i][i][i]; // diagonal element
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
