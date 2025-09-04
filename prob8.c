// Compare two 3D arrays(check if equal)

#include <stdio.h>

int main()
{
    int layer, row, col;
    printf("Enter array 1 layer,row and col respectively:");
    scanf("%d%d%d", &layer, &row, &col);
    int arr[layer][row][col];
    printf("Enter array 1 elements:");
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
    printf("The array 1 elements are:\n");
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
    int layer1,row1,col1;
    printf("Enter array 2 layer,row and col respectively:");
    scanf("%d%d%d", &layer1, &row1, &col1);
    int arr1[layer1][row1][col1];
    printf("Enter array 2 elements:");
    for (int i = 0; i < layer1; i++)
    {
        for (int j = 0; j < row1; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                scanf("%d", &arr1[i][j][k]);
            }
        }
    }
    printf("The array 2 elements are:\n");
    for (int i = 0; i < layer1; i++)
    {
        for (int j = 0; j < row1; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                printf("%d ", arr1[i][j][k]);
            }
            printf("\n"); // seperate row
        }
        printf("\n"); // seperate layer
    }
    int e = 1;
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (arr[i][j][k] != arr1[i][j][k])
                {
                    e = 0;
                }
            }
        }
    }
    if (e == 1)
    {
        printf("Both the 3D arrays are equal.");
    }
    else
    {
        printf("Both the 3D arrays are not equal.");
    }
}