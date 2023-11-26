#include <stdio.h>
void main()
{
    // code for 1st matrix starts
    int r1, c1;
    printf("Enter the number of rows of the matrix : ");
    scanf("%d", &r1);
    printf("Enter the number of columns of the matrix : ");
    scanf("%d", &c1);
    int mtrx1[r1][c1];

    printf("\n");

    // taking input of elements for 1st matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter the element of index %d,%d : ", i + 1, j + 1);
            scanf("%d", &mtrx1[i][j]);
        }
    }

    printf("\n");

    // displaying 1st matrix
    printf("Your 1st matrix is : ");
    printf("\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", mtrx1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // code for 2nd matrix starts
    int r2, c2;
    printf("Enter the number of rows of the matrix : ");
    scanf("%d", &r2);
    printf("Enter the number of columns of the matrix : ");
    scanf("%d", &c2);
    int mtrx2[r2][c2];

    printf("\n");

    // taking input of elements for 2nd matrix
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter the element of index %d,%d : ", i + 1, j + 1);
            scanf("%d", &mtrx2[i][j]);
        }
    }

    printf("\n");

    // displaying 2nd matrix
    printf("Your 2nd matrix is : ");
    printf("\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mtrx2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Now conditions for sum of the matrices

    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", mtrx1[i][j] + mtrx2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        if (r1 != r2 || c1 != c2)
        {
            printf("Order of two matrices is different !");
        }
        else
        {
            printf("Some error occuring. Pls enter matrices again.");
        }
    }
}