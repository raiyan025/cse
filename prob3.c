// Find the average of all elements

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
    int sum = 0;
    float avg;
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                sum = sum + arr[i][j][k];
            }
        }
    }
    avg = (float)sum / (layer * row * col);
    printf("Average of array elements are:%2f", avg);

    return 0;
}