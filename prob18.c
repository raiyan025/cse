// Merge two arrays into a third array

#include <stdio.h>

int main()
{
    int size1, size2, size;
    printf("Enter Array one size:\n");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter Array two size:\n");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter Array one elements:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Array two elements:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    size = size1 + size2;
    int arr[size];
    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = size1; i < size; i++)
    {

        arr[i] = arr2[i - size1];// ***
    }
    printf("After merging:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}