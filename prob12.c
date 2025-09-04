// Perform right rotation of array elements by k(variable) positions

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
    int k, temp;
    printf("How many times you want to do right rotation:");
    scanf("%d", &k);
    for (int j = 1; j <= k; j++)
    {
        temp = arr[size - 1];
        for (int i = 0; i < size; i++)
        {
            arr[size - 1 - i] = arr[size - 2 - i];
        }
        arr[0] = temp;
    }
    printf("After rotating:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}