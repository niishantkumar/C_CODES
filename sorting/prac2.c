// insertion sort
#include <stdio.h>

// func prototype
void insertionSort(int[], int);

void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    insertionSort(arr,size);
}

void insertionSort(int arr[], int size)
{
    int temp;
    int curr, prev;

    for (int i = 1; i < size; i++)
    {
        curr = arr[i];
        prev = i - 1;

        while (curr < arr[prev] && prev >= 0)
        {
            arr[prev + 1] = arr[prev];

            prev--;
        }

        arr[prev + 1] = curr;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}