// remove duplicate element from shorted array
#include <stdio.h>

void main()
{
    int arr[] = {1, 2, 2, 4, 4};

    int arr1[5];
    int arr1Ind = 0, i;
    arr1[0] = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] != arr1[arr1Ind])
        {
            arr1Ind++;
            arr1[arr1Ind] = arr[i];
        }
    }

    for (i = 0; i <= arr1Ind; i++)
    {
        printf("%d ", arr1[i]);
    }
}