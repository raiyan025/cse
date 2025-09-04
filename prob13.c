// Insert an element at a given position in an array

#include <stdio.h>

int main()
{
    int size, index, value;
    printf("Enter Array size:\n");
    scanf("%d", &size);
    int arr[size + 1];
    printf("Enter Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter index number where you want to insert an element:");
    scanf("%d", &index);
    if (index < 0 || index > size + 1)
    {
        printf("Invalid Index");
        return 0;
    }
    printf("Enter the value you want to add:");
    scanf("%d", &value);
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    printf("After Insertion:");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}