// selection sort

#include <stdio.h>

void selectionSort(int[], int);

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

    selectionSort(arr,size);
}

void selectionSort(int arr[], int size)
{
    int smallPos, temp;

    for (int i = 0; i < size - 1; i++)
    {
        smallPos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[smallPos] > arr[j])
            {
                smallPos = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallPos];
        arr[smallPos] = temp;
    }

    printf("Array after sorting :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}