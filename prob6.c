// Find the maximum and minimum element in a 3D array

#include <stdio.h>

int main()
{
    int layer, row, col;
    printf("Enter array layer,row and col respectively:");
    scanf("%d%d%d", &layer, &row, &col);
    int arr[layer][row][col];
    printf("Enter array elements:");
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
            printf("\n"); // seperate row
        }
        printf("\n"); // seperate layer
    }
    int max = arr[0][0][0], min = arr[0][0][0];
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (max < arr[i][j][k])
                {
                    max = arr[i][j][k];
                }

                if (min > arr[i][j][k])
                {
                    min = arr[i][j][k];
                }
            }
        }
    }
    printf("Maximum element:%d", max);
    printf("\nMinimum element:%d", min);
    return 0;
}