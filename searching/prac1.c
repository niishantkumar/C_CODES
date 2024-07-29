// code for linear search in an array

#include <stdio.h>

int linearSearch(int array[], int key, int size);

void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);

    printf("\n");

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("\n");

    int key;
    printf("Enter key : ");
    scanf("%d", &key);

    if (linearSearch(array, key, size) == -1)
    {
        printf("No match !");
    }
    else
    {
        printf("Found at %d", linearSearch(array, key, size));
    }
}

int linearSearch(int array[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }

    return -1;
}