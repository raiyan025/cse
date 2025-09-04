// Remove duplicate elements and count them from an array
//Think how to do without sorting if its possible
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

        for (int i = 0; i < size - 1; i++) // size-1 to make sure we dont touch size by i+1
        {
            int temp = arr[i];
            if (arr[i + 1] < arr[i])
            {
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    int d = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            for (int s = i + 1; s <= size - 1; s++)//shifting to left
            {
                arr[s] = arr[s + 1];
            }
            d++;
            size--;
            i--;//for 1 2 2  2 3 pattern some will remain unchecked
        }
    }
    printf("After removing the duplicates:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe number of duplicates removed:%d",d);
    return 0;
}