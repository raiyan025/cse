// Perform left rotation of array elements by k(variable) positions

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
    printf("How many times you want to do left rotation:");
    scanf("%d", &k);
    for (int j = 1; j <= k; j++)
    {

        temp = arr[0];
        for (int i = 0; i < size; i++)
        {

            arr[i] = arr[i + 1];
        }
        arr[size - 1] = temp;
    }
    printf("After rotating:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}