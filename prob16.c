// Sort the array in ascending order

#include <stdio.h>

int main()
{
    int size;
    printf("Enter Array size:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < size; j++)
    {

        for (int i = 0; i < size-1; i++)//size-1 to make sure we dont touch size by i+1
        {
            int temp = arr[i];
            if (arr[i + 1] < arr[i])
            {
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf("After Sorting:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}