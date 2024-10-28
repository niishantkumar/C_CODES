// to check sum of which 2 elements is 15

#include <stdio.h>

void main()
{
    int arr[] = {1, 2, 3, 5, 7, 10, 11, 15};

    int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;

    while (left < right)
    {
        if ((arr[left] + arr[right]) == 15)
        {
            printf("Element at index %d & %d", left, right);
            return;
        }
        else if (arr[left] + arr[right] < 15)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    printf("No such two elements");
}