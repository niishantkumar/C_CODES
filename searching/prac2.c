// binary search
#include <stdio.h>

// func for binary search
int binarySearch(int[], int, int);

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int index = binarySearch(arr, 6, 6);

    if (index < 0)
    {
        printf("No match !");
    }
    else
    {
        printf("Found at index %d", index);
    }
}

int binarySearch(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}