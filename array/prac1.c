// 2nd largest element

#include <stdio.h>

int secLarEle(int[], int);

void main()
{
    int i, size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    //initia array
    int arr[size];

    //input of array
    printf("Your array is :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //displaying array
    printf("Your array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    //disp 2nd larg ele
    printf("\n2nd largest element is : %d",secLarEle(arr,6));
}

int secLarEle(int arr[], int size)
{
    int max1, max2, i;

    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for (i = 2; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    return max2;
}