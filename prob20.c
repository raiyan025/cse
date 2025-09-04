//Count the frequency of each element in an array

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int freq[n];
    for (i = 0; i < n; i++)
    {
        freq[i] = -1;
    }

    int count, j;
    for (i = 0; i < n; i++)
    {
        count = 1;
        if (freq[i] != 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("frequency of %d is %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}