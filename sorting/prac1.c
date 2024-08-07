// bubble sort
#include <stdio.h>

// func prototype
void bubbleSort(int[], int);

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

    bubbleSort(arr, size);
}

void bubbleSort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}