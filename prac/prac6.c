// transpose of a matrix

#include <stdio.h>

void main()
{
    int r, c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    int arr1[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at Position %d,%d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    printf("mtrx is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            arr1[i][j] = arr[j][i];
        }
    }

    printf("\n");
    printf("The transpose mtrx is :\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}