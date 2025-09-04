//Input and display elements of a 3D array

#include <stdio.h>

int main(){
    int layer,row,col;
    printf("Enter array layer,row and col respectively:");
    scanf("%d%d%d",&layer,&row,&col);
    int arr[layer][row][col];
    printf("Enter array elements:");
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                scanf("%d",&arr[i][j][k]);
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
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");//seperate row
        }
        printf("\n");//seperate layer
    }
    
    return 0;
}