// to find larggest and smallest element in an array
#include <stdio.h>
#include <limits.h>

// func for largest in an array
int largest_Smallest(int arr[], int size);

void main()
{
    int arr[] = {2, 1, 64, 5, 3, 57, 344, 63, 22, 5};

    largest_Smallest(arr, 10);
}

int largest_Smallest(int arr[], int size)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Largest element is : %d", largest);
    printf("\n");
    printf("Smallest element is : %d", smallest);
    printf("\n");
}