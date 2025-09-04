//Count positive and negative numbers in a 3D array


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
    int n=0,p=0;
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (arr[i][j][k]>0)
                {
                    p++;
                }
                else
                {
                    n++;
                }
                
            }
            
        }
        
    }
    printf("The Number of positive elements:%d",p);
    printf("\nThe Number of negative elements:%d",n);
    return 0;
}