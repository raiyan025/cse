// Delete an element from a given position

#include <stdio.h>

int main()
{
    int size, index;
    printf("Enter Array size:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index where you want to delete the element:");
    scanf("%d", &index);
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("After Deleting:");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}